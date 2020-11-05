DEST=$1
mkdir -p $DEST

PROTOS=$(realpath $(dirname $0)/..)
PROTOC_DIR=$(dirname `which protoc`)

echo Destination Directory: $DEST
echo Protoc Directory: $PROTOC_DIR
echo Protos Directory: $PROTOS

if [ "$2" = "csharp" ]
then
  rm $DEST/*.cs
  OUT_OPTION=--csharp_out
  GRPC_PLUGIN=grpc_csharp_plugin
elif [ "$2" = "cpp" ]
then
  rm -rf $DEST/metamoto
  OUT_OPTION=--cpp_out
  GRPC_PLUGIN=grpc_cpp_plugin
fi

find "$PROTOS/metamoto/messages" -name *.proto | while read line; do
  echo Compiling $line...
  "$PROTOC_DIR/protoc" -I="$PROTOS" $OUT_OPTION=$DEST "$line"
done

find "$PROTOS/metamoto/types" -name *.proto | while read line; do
  echo Compiling $line...
  "$PROTOC_DIR/protoc" -I="$PROTOS" $OUT_OPTION=$DEST "$line"
done

if [ "$3" = "1" ]
then
  find "$PROTOS/metamoto/services" -name *.proto | while read line; do
    echo Compiling $line...
    "$PROTOC_DIR/protoc" -I="$PROTOS" $OUT_OPTION=$DEST --grpc_out=$DEST --plugin=protoc-gen-grpc=$PROTOC_DIR/$GRPC_PLUGIN "$line"
  done
fi


