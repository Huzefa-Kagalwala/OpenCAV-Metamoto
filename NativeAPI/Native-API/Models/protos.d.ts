import * as $protobuf from "protobufjs";
/** Namespace metamoto. */
export namespace metamoto {

    /** Namespace types. */
    namespace types {

        /** Properties of an Acceleration. */
        interface IAcceleration {

            /** Acceleration linear */
            linear?: (metamoto.types.IVector3|null);

            /** Acceleration angular */
            angular?: (metamoto.types.IVector3|null);
        }

        /** Represents an Acceleration. */
        class Acceleration implements IAcceleration {

            /**
             * Constructs a new Acceleration.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IAcceleration);

            /** Acceleration linear. */
            public linear?: (metamoto.types.IVector3|null);

            /** Acceleration angular. */
            public angular?: (metamoto.types.IVector3|null);

            /**
             * Creates a new Acceleration instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Acceleration instance
             */
            public static create(properties?: metamoto.types.IAcceleration): metamoto.types.Acceleration;

            /**
             * Encodes the specified Acceleration message. Does not implicitly {@link metamoto.types.Acceleration.verify|verify} messages.
             * @param message Acceleration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IAcceleration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Acceleration message, length delimited. Does not implicitly {@link metamoto.types.Acceleration.verify|verify} messages.
             * @param message Acceleration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IAcceleration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Acceleration message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Acceleration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Acceleration;

            /**
             * Decodes an Acceleration message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Acceleration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Acceleration;

            /**
             * Verifies an Acceleration message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Acceleration message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Acceleration
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Acceleration;

            /**
             * Creates a plain object from an Acceleration message. Also converts values to other types if specified.
             * @param message Acceleration
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Acceleration, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Acceleration to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Asset. */
        interface IAsset {

            /** Asset name */
            name?: (string|null);

            /** Asset version */
            version?: (string|null);
        }

        /** Represents an Asset. */
        class Asset implements IAsset {

            /**
             * Constructs a new Asset.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IAsset);

            /** Asset name. */
            public name: string;

            /** Asset version. */
            public version: string;

            /**
             * Creates a new Asset instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Asset instance
             */
            public static create(properties?: metamoto.types.IAsset): metamoto.types.Asset;

            /**
             * Encodes the specified Asset message. Does not implicitly {@link metamoto.types.Asset.verify|verify} messages.
             * @param message Asset message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IAsset, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Asset message, length delimited. Does not implicitly {@link metamoto.types.Asset.verify|verify} messages.
             * @param message Asset message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IAsset, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Asset message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Asset
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Asset;

            /**
             * Decodes an Asset message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Asset
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Asset;

            /**
             * Verifies an Asset message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Asset message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Asset
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Asset;

            /**
             * Creates a plain object from an Asset message. Also converts values to other types if specified.
             * @param message Asset
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Asset, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Asset to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a BoundingBox. */
        interface IBoundingBox {

            /** BoundingBox center */
            center?: (metamoto.types.IVector3|null);

            /** BoundingBox extents */
            extents?: (metamoto.types.IVector3|null);

            /** BoundingBox orientation */
            orientation?: (metamoto.types.IQuaternion|null);

            /** BoundingBox color */
            color?: (string|null);
        }

        /** Represents a BoundingBox. */
        class BoundingBox implements IBoundingBox {

            /**
             * Constructs a new BoundingBox.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IBoundingBox);

            /** BoundingBox center. */
            public center?: (metamoto.types.IVector3|null);

            /** BoundingBox extents. */
            public extents?: (metamoto.types.IVector3|null);

            /** BoundingBox orientation. */
            public orientation?: (metamoto.types.IQuaternion|null);

            /** BoundingBox color. */
            public color: string;

            /**
             * Creates a new BoundingBox instance using the specified properties.
             * @param [properties] Properties to set
             * @returns BoundingBox instance
             */
            public static create(properties?: metamoto.types.IBoundingBox): metamoto.types.BoundingBox;

            /**
             * Encodes the specified BoundingBox message. Does not implicitly {@link metamoto.types.BoundingBox.verify|verify} messages.
             * @param message BoundingBox message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IBoundingBox, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified BoundingBox message, length delimited. Does not implicitly {@link metamoto.types.BoundingBox.verify|verify} messages.
             * @param message BoundingBox message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IBoundingBox, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a BoundingBox message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns BoundingBox
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.BoundingBox;

            /**
             * Decodes a BoundingBox message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns BoundingBox
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.BoundingBox;

            /**
             * Verifies a BoundingBox message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a BoundingBox message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns BoundingBox
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.BoundingBox;

            /**
             * Creates a plain object from a BoundingBox message. Also converts values to other types if specified.
             * @param message BoundingBox
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.BoundingBox, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this BoundingBox to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a CameraObject. */
        interface ICameraObject {

            /** CameraObject objectId */
            objectId?: (number|null);

            /** CameraObject objectType */
            objectType?: (metamoto.types.ObjectType|null);

            /** CameraObject referenceFrame */
            referenceFrame?: (metamoto.types.ReferenceFrame|null);

            /** CameraObject pose */
            pose?: (metamoto.types.IPose|null);

            /** CameraObject velocity */
            velocity?: (metamoto.types.IVelocity|null);

            /** CameraObject acceleration */
            acceleration?: (metamoto.types.IAcceleration|null);

            /** CameraObject shape */
            shape?: (metamoto.types.IShape|null);

            /** CameraObject xLowerLeft */
            xLowerLeft?: (number|null);

            /** CameraObject yLowerLeft */
            yLowerLeft?: (number|null);

            /** CameraObject xUpperRight */
            xUpperRight?: (number|null);

            /** CameraObject yUpperRight */
            yUpperRight?: (number|null);

            /** CameraObject pixelCount */
            pixelCount?: (number|null);
        }

        /** Represents a CameraObject. */
        class CameraObject implements ICameraObject {

            /**
             * Constructs a new CameraObject.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ICameraObject);

            /** CameraObject objectId. */
            public objectId: number;

            /** CameraObject objectType. */
            public objectType: metamoto.types.ObjectType;

            /** CameraObject referenceFrame. */
            public referenceFrame: metamoto.types.ReferenceFrame;

            /** CameraObject pose. */
            public pose?: (metamoto.types.IPose|null);

            /** CameraObject velocity. */
            public velocity?: (metamoto.types.IVelocity|null);

            /** CameraObject acceleration. */
            public acceleration?: (metamoto.types.IAcceleration|null);

            /** CameraObject shape. */
            public shape?: (metamoto.types.IShape|null);

            /** CameraObject xLowerLeft. */
            public xLowerLeft: number;

            /** CameraObject yLowerLeft. */
            public yLowerLeft: number;

            /** CameraObject xUpperRight. */
            public xUpperRight: number;

            /** CameraObject yUpperRight. */
            public yUpperRight: number;

            /** CameraObject pixelCount. */
            public pixelCount: number;

            /**
             * Creates a new CameraObject instance using the specified properties.
             * @param [properties] Properties to set
             * @returns CameraObject instance
             */
            public static create(properties?: metamoto.types.ICameraObject): metamoto.types.CameraObject;

            /**
             * Encodes the specified CameraObject message. Does not implicitly {@link metamoto.types.CameraObject.verify|verify} messages.
             * @param message CameraObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ICameraObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified CameraObject message, length delimited. Does not implicitly {@link metamoto.types.CameraObject.verify|verify} messages.
             * @param message CameraObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ICameraObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a CameraObject message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns CameraObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.CameraObject;

            /**
             * Decodes a CameraObject message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns CameraObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.CameraObject;

            /**
             * Verifies a CameraObject message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a CameraObject message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns CameraObject
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.CameraObject;

            /**
             * Creates a plain object from a CameraObject message. Also converts values to other types if specified.
             * @param message CameraObject
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.CameraObject, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this CameraObject to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a SystemUnderTest. */
        interface ISystemUnderTest {

            /** SystemUnderTest host */
            host?: (string|null);

            /** SystemUnderTest port */
            port?: (number|null);

            /** SystemUnderTest image */
            image?: (string|null);

            /** SystemUnderTest command */
            command?: (string[]|null);

            /** SystemUnderTest hosts */
            hosts?: (string[]|null);

            /** SystemUnderTest ports */
            ports?: (number[]|null);

            /** SystemUnderTest containers */
            containers?: (metamoto.types.SystemUnderTest.IContainer[]|null);
        }

        /** Represents a SystemUnderTest. */
        class SystemUnderTest implements ISystemUnderTest {

            /**
             * Constructs a new SystemUnderTest.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISystemUnderTest);

            /** SystemUnderTest host. */
            public host: string;

            /** SystemUnderTest port. */
            public port: number;

            /** SystemUnderTest image. */
            public image: string;

            /** SystemUnderTest command. */
            public command: string[];

            /** SystemUnderTest hosts. */
            public hosts: string[];

            /** SystemUnderTest ports. */
            public ports: number[];

            /** SystemUnderTest containers. */
            public containers: metamoto.types.SystemUnderTest.IContainer[];

            /**
             * Creates a new SystemUnderTest instance using the specified properties.
             * @param [properties] Properties to set
             * @returns SystemUnderTest instance
             */
            public static create(properties?: metamoto.types.ISystemUnderTest): metamoto.types.SystemUnderTest;

            /**
             * Encodes the specified SystemUnderTest message. Does not implicitly {@link metamoto.types.SystemUnderTest.verify|verify} messages.
             * @param message SystemUnderTest message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISystemUnderTest, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified SystemUnderTest message, length delimited. Does not implicitly {@link metamoto.types.SystemUnderTest.verify|verify} messages.
             * @param message SystemUnderTest message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISystemUnderTest, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a SystemUnderTest message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns SystemUnderTest
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SystemUnderTest;

            /**
             * Decodes a SystemUnderTest message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns SystemUnderTest
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SystemUnderTest;

            /**
             * Verifies a SystemUnderTest message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a SystemUnderTest message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns SystemUnderTest
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.SystemUnderTest;

            /**
             * Creates a plain object from a SystemUnderTest message. Also converts values to other types if specified.
             * @param message SystemUnderTest
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.SystemUnderTest, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this SystemUnderTest to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace SystemUnderTest {

            /** Properties of a Container. */
            interface IContainer {

                /** Container image */
                image?: (string|null);

                /** Container command */
                command?: (string[]|null);
            }

            /** Represents a Container. */
            class Container implements IContainer {

                /**
                 * Constructs a new Container.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.SystemUnderTest.IContainer);

                /** Container image. */
                public image: string;

                /** Container command. */
                public command: string[];

                /**
                 * Creates a new Container instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Container instance
                 */
                public static create(properties?: metamoto.types.SystemUnderTest.IContainer): metamoto.types.SystemUnderTest.Container;

                /**
                 * Encodes the specified Container message. Does not implicitly {@link metamoto.types.SystemUnderTest.Container.verify|verify} messages.
                 * @param message Container message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.SystemUnderTest.IContainer, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Container message, length delimited. Does not implicitly {@link metamoto.types.SystemUnderTest.Container.verify|verify} messages.
                 * @param message Container message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.SystemUnderTest.IContainer, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Container message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Container
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SystemUnderTest.Container;

                /**
                 * Decodes a Container message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Container
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SystemUnderTest.Container;

                /**
                 * Verifies a Container message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Container message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Container
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.SystemUnderTest.Container;

                /**
                 * Creates a plain object from a Container message. Also converts values to other types if specified.
                 * @param message Container
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.SystemUnderTest.Container, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Container to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a Controller. */
        interface IController {

            /** Controller id */
            id?: (string|null);

            /** Controller displayName */
            displayName?: (string|null);

            /** Controller internalName */
            internalName?: (string|null);

            /** Controller readOnly */
            readOnly?: (boolean|null);

            /** Controller version */
            version?: (metamoto.types.IVersion|null);

            /** Controller disabled */
            disabled?: (boolean|null);

            /** Controller sut */
            sut?: (metamoto.types.ISystemUnderTest|null);

            /** Controller publishTopics */
            publishTopics?: (string[]|null);

            /** Controller dataLatency */
            dataLatency?: (metamoto.types.INormalDistribution|null);

            /** Controller parameters */
            parameters?: (google.protobuf.IStruct|null);

            /** Controller ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents a Controller. */
        class Controller implements IController {

            /**
             * Constructs a new Controller.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IController);

            /** Controller id. */
            public id: string;

            /** Controller displayName. */
            public displayName: string;

            /** Controller internalName. */
            public internalName: string;

            /** Controller readOnly. */
            public readOnly: boolean;

            /** Controller version. */
            public version?: (metamoto.types.IVersion|null);

            /** Controller disabled. */
            public disabled: boolean;

            /** Controller sut. */
            public sut?: (metamoto.types.ISystemUnderTest|null);

            /** Controller publishTopics. */
            public publishTopics: string[];

            /** Controller dataLatency. */
            public dataLatency?: (metamoto.types.INormalDistribution|null);

            /** Controller parameters. */
            public parameters?: (google.protobuf.IStruct|null);

            /** Controller ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new Controller instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Controller instance
             */
            public static create(properties?: metamoto.types.IController): metamoto.types.Controller;

            /**
             * Encodes the specified Controller message. Does not implicitly {@link metamoto.types.Controller.verify|verify} messages.
             * @param message Controller message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IController, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Controller message, length delimited. Does not implicitly {@link metamoto.types.Controller.verify|verify} messages.
             * @param message Controller message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IController, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Controller message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Controller
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Controller;

            /**
             * Decodes a Controller message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Controller
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Controller;

            /**
             * Verifies a Controller message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Controller message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Controller
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Controller;

            /**
             * Creates a plain object from a Controller message. Also converts values to other types if specified.
             * @param message Controller
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Controller, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Controller to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Sensor. */
        interface ISensor {

            /** Sensor id */
            id?: (string|null);

            /** Sensor displayName */
            displayName?: (string|null);

            /** Sensor internalName */
            internalName?: (string|null);

            /** Sensor prefabName */
            prefabName?: (string|null);

            /** Sensor readOnly */
            readOnly?: (boolean|null);

            /** Sensor version */
            version?: (metamoto.types.IVersion|null);

            /** Sensor disabled */
            disabled?: (boolean|null);

            /** Sensor pose */
            pose?: (metamoto.types.IPose|null);

            /** Sensor sensorMountId */
            sensorMountId?: (string|null);

            /** Sensor mountPointId */
            mountPointId?: (string|null);

            /** Sensor sut */
            sut?: (metamoto.types.ISystemUnderTest|null);

            /** Sensor publishTopics */
            publishTopics?: (string[]|null);

            /** Sensor dataLatency */
            dataLatency?: (metamoto.types.INormalDistribution|null);

            /** Sensor parameters */
            parameters?: (google.protobuf.IStruct|null);

            /** Sensor priority */
            priority?: (number|null);

            /** Sensor ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents a Sensor. */
        class Sensor implements ISensor {

            /**
             * Constructs a new Sensor.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISensor);

            /** Sensor id. */
            public id: string;

            /** Sensor displayName. */
            public displayName: string;

            /** Sensor internalName. */
            public internalName: string;

            /** Sensor prefabName. */
            public prefabName: string;

            /** Sensor readOnly. */
            public readOnly: boolean;

            /** Sensor version. */
            public version?: (metamoto.types.IVersion|null);

            /** Sensor disabled. */
            public disabled: boolean;

            /** Sensor pose. */
            public pose?: (metamoto.types.IPose|null);

            /** Sensor sensorMountId. */
            public sensorMountId: string;

            /** Sensor mountPointId. */
            public mountPointId: string;

            /** Sensor sut. */
            public sut?: (metamoto.types.ISystemUnderTest|null);

            /** Sensor publishTopics. */
            public publishTopics: string[];

            /** Sensor dataLatency. */
            public dataLatency?: (metamoto.types.INormalDistribution|null);

            /** Sensor parameters. */
            public parameters?: (google.protobuf.IStruct|null);

            /** Sensor priority. */
            public priority: number;

            /** Sensor ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new Sensor instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Sensor instance
             */
            public static create(properties?: metamoto.types.ISensor): metamoto.types.Sensor;

            /**
             * Encodes the specified Sensor message. Does not implicitly {@link metamoto.types.Sensor.verify|verify} messages.
             * @param message Sensor message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISensor, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Sensor message, length delimited. Does not implicitly {@link metamoto.types.Sensor.verify|verify} messages.
             * @param message Sensor message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISensor, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Sensor message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Sensor
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Sensor;

            /**
             * Decodes a Sensor message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Sensor
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Sensor;

            /**
             * Verifies a Sensor message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Sensor message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Sensor
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Sensor;

            /**
             * Creates a plain object from a Sensor message. Also converts values to other types if specified.
             * @param message Sensor
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Sensor, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Sensor to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a SensorMount. */
        interface ISensorMount {

            /** SensorMount id */
            id?: (string|null);

            /** SensorMount displayName */
            displayName?: (string|null);

            /** SensorMount prefabName */
            prefabName?: (string|null);

            /** SensorMount readOnly */
            readOnly?: (boolean|null);

            /** SensorMount mountPoints */
            mountPoints?: (metamoto.types.SensorMount.IMountPoint[]|null);

            /** SensorMount pose */
            pose?: (metamoto.types.IPose|null);

            /** SensorMount ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents a SensorMount. */
        class SensorMount implements ISensorMount {

            /**
             * Constructs a new SensorMount.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISensorMount);

            /** SensorMount id. */
            public id: string;

            /** SensorMount displayName. */
            public displayName: string;

            /** SensorMount prefabName. */
            public prefabName: string;

            /** SensorMount readOnly. */
            public readOnly: boolean;

            /** SensorMount mountPoints. */
            public mountPoints: metamoto.types.SensorMount.IMountPoint[];

            /** SensorMount pose. */
            public pose?: (metamoto.types.IPose|null);

            /** SensorMount ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new SensorMount instance using the specified properties.
             * @param [properties] Properties to set
             * @returns SensorMount instance
             */
            public static create(properties?: metamoto.types.ISensorMount): metamoto.types.SensorMount;

            /**
             * Encodes the specified SensorMount message. Does not implicitly {@link metamoto.types.SensorMount.verify|verify} messages.
             * @param message SensorMount message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISensorMount, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified SensorMount message, length delimited. Does not implicitly {@link metamoto.types.SensorMount.verify|verify} messages.
             * @param message SensorMount message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISensorMount, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a SensorMount message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns SensorMount
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SensorMount;

            /**
             * Decodes a SensorMount message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns SensorMount
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SensorMount;

            /**
             * Verifies a SensorMount message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a SensorMount message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns SensorMount
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.SensorMount;

            /**
             * Creates a plain object from a SensorMount message. Also converts values to other types if specified.
             * @param message SensorMount
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.SensorMount, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this SensorMount to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace SensorMount {

            /** Properties of a MountPoint. */
            interface IMountPoint {

                /** MountPoint id */
                id?: (string|null);

                /** MountPoint type */
                type?: (metamoto.types.SensorMount.MountPoint.Type|null);

                /** MountPoint pose */
                pose?: (metamoto.types.IPose|null);
            }

            /** Represents a MountPoint. */
            class MountPoint implements IMountPoint {

                /**
                 * Constructs a new MountPoint.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.SensorMount.IMountPoint);

                /** MountPoint id. */
                public id: string;

                /** MountPoint type. */
                public type: metamoto.types.SensorMount.MountPoint.Type;

                /** MountPoint pose. */
                public pose?: (metamoto.types.IPose|null);

                /**
                 * Creates a new MountPoint instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns MountPoint instance
                 */
                public static create(properties?: metamoto.types.SensorMount.IMountPoint): metamoto.types.SensorMount.MountPoint;

                /**
                 * Encodes the specified MountPoint message. Does not implicitly {@link metamoto.types.SensorMount.MountPoint.verify|verify} messages.
                 * @param message MountPoint message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.SensorMount.IMountPoint, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified MountPoint message, length delimited. Does not implicitly {@link metamoto.types.SensorMount.MountPoint.verify|verify} messages.
                 * @param message MountPoint message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.SensorMount.IMountPoint, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a MountPoint message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns MountPoint
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SensorMount.MountPoint;

                /**
                 * Decodes a MountPoint message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns MountPoint
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SensorMount.MountPoint;

                /**
                 * Verifies a MountPoint message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a MountPoint message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns MountPoint
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.SensorMount.MountPoint;

                /**
                 * Creates a plain object from a MountPoint message. Also converts values to other types if specified.
                 * @param message MountPoint
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.SensorMount.MountPoint, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this MountPoint to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace MountPoint {

                /** Type enum. */
                enum Type {
                    UNKNOWN = 0,
                    OTHER = 1,
                    CAMERA = 2,
                    LIDAR = 3,
                    RADAR = 4
                }
            }
        }

        /** Properties of a VehicleDynamics. */
        interface IVehicleDynamics {

            /** VehicleDynamics id */
            id?: (string|null);

            /** VehicleDynamics displayName */
            displayName?: (string|null);

            /** VehicleDynamics internalName */
            internalName?: (string|null);

            /** VehicleDynamics readOnly */
            readOnly?: (boolean|null);

            /** VehicleDynamics version */
            version?: (string|null);

            /** VehicleDynamics disabled */
            disabled?: (boolean|null);

            /** VehicleDynamics sut */
            sut?: (metamoto.types.ISystemUnderTest|null);

            /** VehicleDynamics parameters */
            parameters?: (google.protobuf.IStruct|null);

            /** VehicleDynamics ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents a VehicleDynamics. */
        class VehicleDynamics implements IVehicleDynamics {

            /**
             * Constructs a new VehicleDynamics.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVehicleDynamics);

            /** VehicleDynamics id. */
            public id: string;

            /** VehicleDynamics displayName. */
            public displayName: string;

            /** VehicleDynamics internalName. */
            public internalName: string;

            /** VehicleDynamics readOnly. */
            public readOnly: boolean;

            /** VehicleDynamics version. */
            public version: string;

            /** VehicleDynamics disabled. */
            public disabled: boolean;

            /** VehicleDynamics sut. */
            public sut?: (metamoto.types.ISystemUnderTest|null);

            /** VehicleDynamics parameters. */
            public parameters?: (google.protobuf.IStruct|null);

            /** VehicleDynamics ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new VehicleDynamics instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VehicleDynamics instance
             */
            public static create(properties?: metamoto.types.IVehicleDynamics): metamoto.types.VehicleDynamics;

            /**
             * Encodes the specified VehicleDynamics message. Does not implicitly {@link metamoto.types.VehicleDynamics.verify|verify} messages.
             * @param message VehicleDynamics message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVehicleDynamics, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VehicleDynamics message, length delimited. Does not implicitly {@link metamoto.types.VehicleDynamics.verify|verify} messages.
             * @param message VehicleDynamics message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVehicleDynamics, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VehicleDynamics message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VehicleDynamics
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VehicleDynamics;

            /**
             * Decodes a VehicleDynamics message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VehicleDynamics
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VehicleDynamics;

            /**
             * Verifies a VehicleDynamics message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VehicleDynamics message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VehicleDynamics
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.VehicleDynamics;

            /**
             * Creates a plain object from a VehicleDynamics message. Also converts values to other types if specified.
             * @param message VehicleDynamics
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.VehicleDynamics, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VehicleDynamics to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an EgoVehicle. */
        interface IEgoVehicle {

            /** EgoVehicle id */
            id?: (string|null);

            /** EgoVehicle displayName */
            displayName?: (string|null);

            /** EgoVehicle modelName */
            modelName?: (string|null);

            /** EgoVehicle readOnly */
            readOnly?: (boolean|null);

            /** EgoVehicle version */
            version?: (metamoto.types.IVersion|null);

            /** EgoVehicle body */
            body?: (metamoto.types.VehicleInstance.IBody|null);

            /** EgoVehicle controllers */
            controllers?: (metamoto.types.IController[]|null);

            /** EgoVehicle sensors */
            sensors?: (metamoto.types.ISensor[]|null);

            /** EgoVehicle sensorMounts */
            sensorMounts?: (metamoto.types.ISensorMount[]|null);

            /** EgoVehicle vehicleDynamics */
            vehicleDynamics?: (metamoto.types.IVehicleDynamics|null);

            /** EgoVehicle assets */
            assets?: (metamoto.types.IAsset[]|null);

            /** EgoVehicle ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents an EgoVehicle. */
        class EgoVehicle implements IEgoVehicle {

            /**
             * Constructs a new EgoVehicle.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IEgoVehicle);

            /** EgoVehicle id. */
            public id: string;

            /** EgoVehicle displayName. */
            public displayName: string;

            /** EgoVehicle modelName. */
            public modelName: string;

            /** EgoVehicle readOnly. */
            public readOnly: boolean;

            /** EgoVehicle version. */
            public version?: (metamoto.types.IVersion|null);

            /** EgoVehicle body. */
            public body?: (metamoto.types.VehicleInstance.IBody|null);

            /** EgoVehicle controllers. */
            public controllers: metamoto.types.IController[];

            /** EgoVehicle sensors. */
            public sensors: metamoto.types.ISensor[];

            /** EgoVehicle sensorMounts. */
            public sensorMounts: metamoto.types.ISensorMount[];

            /** EgoVehicle vehicleDynamics. */
            public vehicleDynamics?: (metamoto.types.IVehicleDynamics|null);

            /** EgoVehicle assets. */
            public assets: metamoto.types.IAsset[];

            /** EgoVehicle ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new EgoVehicle instance using the specified properties.
             * @param [properties] Properties to set
             * @returns EgoVehicle instance
             */
            public static create(properties?: metamoto.types.IEgoVehicle): metamoto.types.EgoVehicle;

            /**
             * Encodes the specified EgoVehicle message. Does not implicitly {@link metamoto.types.EgoVehicle.verify|verify} messages.
             * @param message EgoVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IEgoVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified EgoVehicle message, length delimited. Does not implicitly {@link metamoto.types.EgoVehicle.verify|verify} messages.
             * @param message EgoVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IEgoVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an EgoVehicle message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns EgoVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.EgoVehicle;

            /**
             * Decodes an EgoVehicle message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns EgoVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.EgoVehicle;

            /**
             * Verifies an EgoVehicle message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an EgoVehicle message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns EgoVehicle
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.EgoVehicle;

            /**
             * Creates a plain object from an EgoVehicle message. Also converts values to other types if specified.
             * @param message EgoVehicle
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.EgoVehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this EgoVehicle to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** ObjectType enum. */
        enum ObjectType {
            OBJECT_UNKNOWN = 0,
            OBJECT_OTHER = 1,
            OBJECT_CAR = 2,
            OBJECT_TRUCK = 3,
            OBJECT_BUS = 4,
            OBJECT_MOTORCYCLE = 5,
            OBJECT_BICYCLE = 6,
            OBJECT_TRAIN = 7,
            OBJECT_PEDESTRIAN = 8,
            OBJECT_ANIMAL = 9,
            OBJECT_TRAFFIC_LIGHT = 10,
            OBJECT_TRAFFIC_SIGN = 11,
            OBJECT_TRAFFIC_BARRIER = 12,
            OBJECT_TRAFFIC_CONE = 13,
            OBJECT_GROUND = 14,
            OBJECT_ROAD = 15,
            OBJECT_RAIL_TRACK = 16,
            OBJECT_SIDEWALK = 17,
            OBJECT_CURB = 18,
            OBJECT_STATIC_OBJECT = 19,
            OBJECT_SIGN = 20,
            OBJECT_POLE = 21,
            OBJECT_BUILDING = 22,
            OBJECT_WALL = 23,
            OBJECT_FENCE = 24,
            OBJECT_TREE = 25,
            OBJECT_VEGETATION = 26
        }

        /** MaterialType enum. */
        enum MaterialType {
            MATERIAL_UNKNOWN = 0,
            MATERIAL_OTHER = 1,
            MATERIAL_ASPHALT = 2,
            MATERIAL_GRAVEL = 3,
            MATERIAL_ROCK = 4,
            MATERIAL_SOIL = 5,
            MATERIAL_SAND = 6,
            MATERIAL_GRASS = 7,
            MATERIAL_WATER = 8,
            MATERIAL_SNOW = 9,
            MATERIAL_CONCRETE = 10,
            MATERIAL_STUCCO = 11,
            MATERIAL_STONE = 12,
            MATERIAL_BRICK = 13,
            MATERIAL_WOOD = 14,
            MATERIAL_GLASS = 15,
            MATERIAL_MIRROR = 16,
            MATERIAL_CERAMIC = 17,
            MATERIAL_METAL = 18,
            MATERIAL_CARBON_FIBER = 19,
            MATERIAL_LEATHER = 20,
            MATERIAL_PLASTIC = 21,
            MATERIAL_RUBBER = 22,
            MATERIAL_PAPER = 23,
            MATERIAL_LEAF = 24,
            MATERIAL_SKIN = 25,
            MATERIAL_FABRIC = 26,
            MATERIAL_RETROREFLECTOR = 27,
            MATERIAL_TAR = 28,
            MATERIAL_RETROREFLECTIVE_PAINT = 29,
            MATERIAL_FIBERGLASS = 30,
            MATERIAL_CHROME = 31
        }

        /** ReferenceFrame enum. */
        enum ReferenceFrame {
            REFERENCE_FRAME_UNKNOWN = 0,
            REFERENCE_FRAME_OTHER = 1,
            REFERENCE_FRAME_WORLD = 2,
            REFERENCE_FRAME_VEHICLE = 3,
            REFERENCE_FRAME_SENSOR = 4
        }

        /** Action enum. */
        enum Action {
            ACTION_UNKNOWN = 0,
            ACTION_PASS = 1,
            ACTION_WARN = 2,
            ACTION_FAIL = 3,
            ACTION_STOP = 4
        }

        /** Properties of an Environment. */
        interface IEnvironment {

            /** Environment weather */
            weather?: (metamoto.types.Environment.IWeather|null);

            /** Environment timeOfDay */
            timeOfDay?: (number|null);

            /** Environment roadConditions */
            roadConditions?: (metamoto.types.Environment.IRoadConditions[]|null);

            /** Environment lighting */
            lighting?: (metamoto.types.Environment.ILighting|null);
        }

        /** Represents an Environment. */
        class Environment implements IEnvironment {

            /**
             * Constructs a new Environment.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IEnvironment);

            /** Environment weather. */
            public weather?: (metamoto.types.Environment.IWeather|null);

            /** Environment timeOfDay. */
            public timeOfDay: number;

            /** Environment roadConditions. */
            public roadConditions: metamoto.types.Environment.IRoadConditions[];

            /** Environment lighting. */
            public lighting?: (metamoto.types.Environment.ILighting|null);

            /**
             * Creates a new Environment instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Environment instance
             */
            public static create(properties?: metamoto.types.IEnvironment): metamoto.types.Environment;

            /**
             * Encodes the specified Environment message. Does not implicitly {@link metamoto.types.Environment.verify|verify} messages.
             * @param message Environment message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IEnvironment, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Environment message, length delimited. Does not implicitly {@link metamoto.types.Environment.verify|verify} messages.
             * @param message Environment message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IEnvironment, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Environment message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Environment
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Environment;

            /**
             * Decodes an Environment message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Environment
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Environment;

            /**
             * Verifies an Environment message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Environment message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Environment
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Environment;

            /**
             * Creates a plain object from an Environment message. Also converts values to other types if specified.
             * @param message Environment
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Environment, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Environment to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Environment {

            /** Properties of a Weather. */
            interface IWeather {

                /** Weather clouds */
                clouds?: (number|null);

                /** Weather overcast */
                overcast?: (number|null);

                /** Weather wind */
                wind?: (number|null);

                /** Weather rain */
                rain?: (number|null);

                /** Weather snow */
                snow?: (number|null);

                /** Weather hail */
                hail?: (number|null);

                /** Weather fog */
                fog?: (number|null);

                /** Weather temperature */
                temperature?: (number|null);
            }

            /** Represents a Weather. */
            class Weather implements IWeather {

                /**
                 * Constructs a new Weather.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Environment.IWeather);

                /** Weather clouds. */
                public clouds: number;

                /** Weather overcast. */
                public overcast: number;

                /** Weather wind. */
                public wind: number;

                /** Weather rain. */
                public rain: number;

                /** Weather snow. */
                public snow: number;

                /** Weather hail. */
                public hail: number;

                /** Weather fog. */
                public fog: number;

                /** Weather temperature. */
                public temperature: number;

                /**
                 * Creates a new Weather instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Weather instance
                 */
                public static create(properties?: metamoto.types.Environment.IWeather): metamoto.types.Environment.Weather;

                /**
                 * Encodes the specified Weather message. Does not implicitly {@link metamoto.types.Environment.Weather.verify|verify} messages.
                 * @param message Weather message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Environment.IWeather, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Weather message, length delimited. Does not implicitly {@link metamoto.types.Environment.Weather.verify|verify} messages.
                 * @param message Weather message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Environment.IWeather, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Weather message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Weather
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Environment.Weather;

                /**
                 * Decodes a Weather message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Weather
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Environment.Weather;

                /**
                 * Verifies a Weather message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Weather message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Weather
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Environment.Weather;

                /**
                 * Creates a plain object from a Weather message. Also converts values to other types if specified.
                 * @param message Weather
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Environment.Weather, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Weather to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a RoadConditions. */
            interface IRoadConditions {

                /** RoadConditions roadId */
                roadId?: (string|null);

                /** RoadConditions laneIndex */
                laneIndex?: (number|null);

                /** RoadConditions sMin */
                sMin?: (number|null);

                /** RoadConditions sMax */
                sMax?: (number|null);

                /** RoadConditions wetness */
                wetness?: (number|null);

                /** RoadConditions puddles */
                puddles?: (number|null);

                /** RoadConditions markingsDeterioration */
                markingsDeterioration?: (number|null);

                /** RoadConditions cracks */
                cracks?: (number|null);

                /** RoadConditions tarSnakes */
                tarSnakes?: (number|null);

                /** RoadConditions potHoles */
                potHoles?: (number|null);
            }

            /** Represents a RoadConditions. */
            class RoadConditions implements IRoadConditions {

                /**
                 * Constructs a new RoadConditions.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Environment.IRoadConditions);

                /** RoadConditions roadId. */
                public roadId: string;

                /** RoadConditions laneIndex. */
                public laneIndex: number;

                /** RoadConditions sMin. */
                public sMin: number;

                /** RoadConditions sMax. */
                public sMax: number;

                /** RoadConditions wetness. */
                public wetness: number;

                /** RoadConditions puddles. */
                public puddles: number;

                /** RoadConditions markingsDeterioration. */
                public markingsDeterioration: number;

                /** RoadConditions cracks. */
                public cracks: number;

                /** RoadConditions tarSnakes. */
                public tarSnakes: number;

                /** RoadConditions potHoles. */
                public potHoles: number;

                /**
                 * Creates a new RoadConditions instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns RoadConditions instance
                 */
                public static create(properties?: metamoto.types.Environment.IRoadConditions): metamoto.types.Environment.RoadConditions;

                /**
                 * Encodes the specified RoadConditions message. Does not implicitly {@link metamoto.types.Environment.RoadConditions.verify|verify} messages.
                 * @param message RoadConditions message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Environment.IRoadConditions, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified RoadConditions message, length delimited. Does not implicitly {@link metamoto.types.Environment.RoadConditions.verify|verify} messages.
                 * @param message RoadConditions message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Environment.IRoadConditions, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a RoadConditions message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns RoadConditions
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Environment.RoadConditions;

                /**
                 * Decodes a RoadConditions message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns RoadConditions
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Environment.RoadConditions;

                /**
                 * Verifies a RoadConditions message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a RoadConditions message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns RoadConditions
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Environment.RoadConditions;

                /**
                 * Creates a plain object from a RoadConditions message. Also converts values to other types if specified.
                 * @param message RoadConditions
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Environment.RoadConditions, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this RoadConditions to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a Lighting. */
            interface ILighting {

                /** Lighting buildings */
                buildings?: (number|null);
            }

            /** Represents a Lighting. */
            class Lighting implements ILighting {

                /**
                 * Constructs a new Lighting.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Environment.ILighting);

                /** Lighting buildings. */
                public buildings: number;

                /**
                 * Creates a new Lighting instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Lighting instance
                 */
                public static create(properties?: metamoto.types.Environment.ILighting): metamoto.types.Environment.Lighting;

                /**
                 * Encodes the specified Lighting message. Does not implicitly {@link metamoto.types.Environment.Lighting.verify|verify} messages.
                 * @param message Lighting message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Environment.ILighting, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Lighting message, length delimited. Does not implicitly {@link metamoto.types.Environment.Lighting.verify|verify} messages.
                 * @param message Lighting message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Environment.ILighting, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Lighting message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Lighting
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Environment.Lighting;

                /**
                 * Decodes a Lighting message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Lighting
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Environment.Lighting;

                /**
                 * Verifies a Lighting message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Lighting message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Lighting
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Environment.Lighting;

                /**
                 * Creates a plain object from a Lighting message. Also converts values to other types if specified.
                 * @param message Lighting
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Environment.Lighting, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Lighting to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a GeoCoordinates. */
        interface IGeoCoordinates {

            /** GeoCoordinates latitude */
            latitude?: (number|null);

            /** GeoCoordinates longitude */
            longitude?: (number|null);

            /** GeoCoordinates altitude */
            altitude?: (number|null);
        }

        /** Represents a GeoCoordinates. */
        class GeoCoordinates implements IGeoCoordinates {

            /**
             * Constructs a new GeoCoordinates.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IGeoCoordinates);

            /** GeoCoordinates latitude. */
            public latitude: number;

            /** GeoCoordinates longitude. */
            public longitude: number;

            /** GeoCoordinates altitude. */
            public altitude: number;

            /**
             * Creates a new GeoCoordinates instance using the specified properties.
             * @param [properties] Properties to set
             * @returns GeoCoordinates instance
             */
            public static create(properties?: metamoto.types.IGeoCoordinates): metamoto.types.GeoCoordinates;

            /**
             * Encodes the specified GeoCoordinates message. Does not implicitly {@link metamoto.types.GeoCoordinates.verify|verify} messages.
             * @param message GeoCoordinates message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IGeoCoordinates, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified GeoCoordinates message, length delimited. Does not implicitly {@link metamoto.types.GeoCoordinates.verify|verify} messages.
             * @param message GeoCoordinates message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IGeoCoordinates, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a GeoCoordinates message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns GeoCoordinates
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.GeoCoordinates;

            /**
             * Decodes a GeoCoordinates message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns GeoCoordinates
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.GeoCoordinates;

            /**
             * Verifies a GeoCoordinates message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a GeoCoordinates message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns GeoCoordinates
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.GeoCoordinates;

            /**
             * Creates a plain object from a GeoCoordinates message. Also converts values to other types if specified.
             * @param message GeoCoordinates
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.GeoCoordinates, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this GeoCoordinates to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Image. */
        interface IImage {

            /** Image width */
            width?: (number|null);

            /** Image height */
            height?: (number|null);

            /** Image step */
            step?: (number|null);

            /** Image encoding */
            encoding?: (string|null);

            /** Image data */
            data?: (Uint8Array|null);
        }

        /** Represents an Image. */
        class Image implements IImage {

            /**
             * Constructs a new Image.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IImage);

            /** Image width. */
            public width: number;

            /** Image height. */
            public height: number;

            /** Image step. */
            public step: number;

            /** Image encoding. */
            public encoding: string;

            /** Image data. */
            public data: Uint8Array;

            /**
             * Creates a new Image instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Image instance
             */
            public static create(properties?: metamoto.types.IImage): metamoto.types.Image;

            /**
             * Encodes the specified Image message. Does not implicitly {@link metamoto.types.Image.verify|verify} messages.
             * @param message Image message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IImage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Image message, length delimited. Does not implicitly {@link metamoto.types.Image.verify|verify} messages.
             * @param message Image message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IImage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Image message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Image
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Image;

            /**
             * Decodes an Image message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Image
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Image;

            /**
             * Verifies an Image message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Image message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Image
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Image;

            /**
             * Creates a plain object from an Image message. Also converts values to other types if specified.
             * @param message Image
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Image, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Image to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a LaserReturn. */
        interface ILaserReturn {

            /** LaserReturn elevationAngle */
            elevationAngle?: (number|null);

            /** LaserReturn ranges */
            ranges?: (number[]|null);

            /** LaserReturn intensities */
            intensities?: (number[]|null);

            /** LaserReturn objectIds */
            objectIds?: (number[]|null);

            /** LaserReturn objectTypes */
            objectTypes?: (metamoto.types.ObjectType[]|null);
        }

        /** Represents a LaserReturn. */
        class LaserReturn implements ILaserReturn {

            /**
             * Constructs a new LaserReturn.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILaserReturn);

            /** LaserReturn elevationAngle. */
            public elevationAngle: number;

            /** LaserReturn ranges. */
            public ranges: number[];

            /** LaserReturn intensities. */
            public intensities: number[];

            /** LaserReturn objectIds. */
            public objectIds: number[];

            /** LaserReturn objectTypes. */
            public objectTypes: metamoto.types.ObjectType[];

            /**
             * Creates a new LaserReturn instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LaserReturn instance
             */
            public static create(properties?: metamoto.types.ILaserReturn): metamoto.types.LaserReturn;

            /**
             * Encodes the specified LaserReturn message. Does not implicitly {@link metamoto.types.LaserReturn.verify|verify} messages.
             * @param message LaserReturn message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILaserReturn, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LaserReturn message, length delimited. Does not implicitly {@link metamoto.types.LaserReturn.verify|verify} messages.
             * @param message LaserReturn message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILaserReturn, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LaserReturn message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LaserReturn
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.LaserReturn;

            /**
             * Decodes a LaserReturn message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LaserReturn
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.LaserReturn;

            /**
             * Verifies a LaserReturn message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LaserReturn message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LaserReturn
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.LaserReturn;

            /**
             * Creates a plain object from a LaserReturn message. Also converts values to other types if specified.
             * @param message LaserReturn
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.LaserReturn, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LaserReturn to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a LaserReturnGroup. */
        interface ILaserReturnGroup {

            /** LaserReturnGroup pose */
            pose?: (metamoto.types.IPose|null);

            /** LaserReturnGroup azimuthAngle */
            azimuthAngle?: (number|null);

            /** LaserReturnGroup returns */
            returns?: (metamoto.types.ILaserReturn[]|null);
        }

        /** Represents a LaserReturnGroup. */
        class LaserReturnGroup implements ILaserReturnGroup {

            /**
             * Constructs a new LaserReturnGroup.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILaserReturnGroup);

            /** LaserReturnGroup pose. */
            public pose?: (metamoto.types.IPose|null);

            /** LaserReturnGroup azimuthAngle. */
            public azimuthAngle: number;

            /** LaserReturnGroup returns. */
            public returns: metamoto.types.ILaserReturn[];

            /**
             * Creates a new LaserReturnGroup instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LaserReturnGroup instance
             */
            public static create(properties?: metamoto.types.ILaserReturnGroup): metamoto.types.LaserReturnGroup;

            /**
             * Encodes the specified LaserReturnGroup message. Does not implicitly {@link metamoto.types.LaserReturnGroup.verify|verify} messages.
             * @param message LaserReturnGroup message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILaserReturnGroup, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LaserReturnGroup message, length delimited. Does not implicitly {@link metamoto.types.LaserReturnGroup.verify|verify} messages.
             * @param message LaserReturnGroup message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILaserReturnGroup, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LaserReturnGroup message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LaserReturnGroup
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.LaserReturnGroup;

            /**
             * Decodes a LaserReturnGroup message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LaserReturnGroup
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.LaserReturnGroup;

            /**
             * Verifies a LaserReturnGroup message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LaserReturnGroup message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LaserReturnGroup
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.LaserReturnGroup;

            /**
             * Creates a plain object from a LaserReturnGroup message. Also converts values to other types if specified.
             * @param message LaserReturnGroup
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.LaserReturnGroup, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LaserReturnGroup to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a NormalDistribution. */
        interface INormalDistribution {

            /** NormalDistribution mean */
            mean?: (number|null);

            /** NormalDistribution stdDev */
            stdDev?: (number|null);
        }

        /** Represents a NormalDistribution. */
        class NormalDistribution implements INormalDistribution {

            /**
             * Constructs a new NormalDistribution.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.INormalDistribution);

            /** NormalDistribution mean. */
            public mean: number;

            /** NormalDistribution stdDev. */
            public stdDev: number;

            /**
             * Creates a new NormalDistribution instance using the specified properties.
             * @param [properties] Properties to set
             * @returns NormalDistribution instance
             */
            public static create(properties?: metamoto.types.INormalDistribution): metamoto.types.NormalDistribution;

            /**
             * Encodes the specified NormalDistribution message. Does not implicitly {@link metamoto.types.NormalDistribution.verify|verify} messages.
             * @param message NormalDistribution message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.INormalDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified NormalDistribution message, length delimited. Does not implicitly {@link metamoto.types.NormalDistribution.verify|verify} messages.
             * @param message NormalDistribution message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.INormalDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a NormalDistribution message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns NormalDistribution
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.NormalDistribution;

            /**
             * Decodes a NormalDistribution message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns NormalDistribution
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.NormalDistribution;

            /**
             * Verifies a NormalDistribution message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a NormalDistribution message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns NormalDistribution
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.NormalDistribution;

            /**
             * Creates a plain object from a NormalDistribution message. Also converts values to other types if specified.
             * @param message NormalDistribution
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.NormalDistribution, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this NormalDistribution to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Pedestrian. */
        interface IPedestrian {

            /** Pedestrian id */
            id?: (string|null);

            /** Pedestrian pose */
            pose?: (metamoto.types.IPose|null);

            /** Pedestrian velocity */
            velocity?: (metamoto.types.IVelocity|null);

            /** Pedestrian acceleration */
            acceleration?: (metamoto.types.IAcceleration|null);

            /** Pedestrian shape */
            shape?: (metamoto.types.IShape|null);

            /** Pedestrian type */
            type?: (metamoto.types.Pedestrian.Type|null);
        }

        /** Represents a Pedestrian. */
        class Pedestrian implements IPedestrian {

            /**
             * Constructs a new Pedestrian.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IPedestrian);

            /** Pedestrian id. */
            public id: string;

            /** Pedestrian pose. */
            public pose?: (metamoto.types.IPose|null);

            /** Pedestrian velocity. */
            public velocity?: (metamoto.types.IVelocity|null);

            /** Pedestrian acceleration. */
            public acceleration?: (metamoto.types.IAcceleration|null);

            /** Pedestrian shape. */
            public shape?: (metamoto.types.IShape|null);

            /** Pedestrian type. */
            public type: metamoto.types.Pedestrian.Type;

            /**
             * Creates a new Pedestrian instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Pedestrian instance
             */
            public static create(properties?: metamoto.types.IPedestrian): metamoto.types.Pedestrian;

            /**
             * Encodes the specified Pedestrian message. Does not implicitly {@link metamoto.types.Pedestrian.verify|verify} messages.
             * @param message Pedestrian message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IPedestrian, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Pedestrian message, length delimited. Does not implicitly {@link metamoto.types.Pedestrian.verify|verify} messages.
             * @param message Pedestrian message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IPedestrian, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Pedestrian message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Pedestrian
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Pedestrian;

            /**
             * Decodes a Pedestrian message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Pedestrian
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Pedestrian;

            /**
             * Verifies a Pedestrian message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Pedestrian message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Pedestrian
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Pedestrian;

            /**
             * Creates a plain object from a Pedestrian message. Also converts values to other types if specified.
             * @param message Pedestrian
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Pedestrian, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Pedestrian to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Pedestrian {

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                ADULT = 2,
                CHILD = 3,
                ANIMAL = 4
            }
        }

        /** Properties of a PedestrianLibrary. */
        interface IPedestrianLibrary {

            /** PedestrianLibrary pedestrians */
            pedestrians?: (metamoto.types.PedestrianLibrary.IPedestrianTemplate[]|null);
        }

        /** Represents a PedestrianLibrary. */
        class PedestrianLibrary implements IPedestrianLibrary {

            /**
             * Constructs a new PedestrianLibrary.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IPedestrianLibrary);

            /** PedestrianLibrary pedestrians. */
            public pedestrians: metamoto.types.PedestrianLibrary.IPedestrianTemplate[];

            /**
             * Creates a new PedestrianLibrary instance using the specified properties.
             * @param [properties] Properties to set
             * @returns PedestrianLibrary instance
             */
            public static create(properties?: metamoto.types.IPedestrianLibrary): metamoto.types.PedestrianLibrary;

            /**
             * Encodes the specified PedestrianLibrary message. Does not implicitly {@link metamoto.types.PedestrianLibrary.verify|verify} messages.
             * @param message PedestrianLibrary message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IPedestrianLibrary, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified PedestrianLibrary message, length delimited. Does not implicitly {@link metamoto.types.PedestrianLibrary.verify|verify} messages.
             * @param message PedestrianLibrary message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IPedestrianLibrary, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a PedestrianLibrary message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns PedestrianLibrary
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PedestrianLibrary;

            /**
             * Decodes a PedestrianLibrary message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns PedestrianLibrary
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PedestrianLibrary;

            /**
             * Verifies a PedestrianLibrary message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a PedestrianLibrary message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns PedestrianLibrary
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.PedestrianLibrary;

            /**
             * Creates a plain object from a PedestrianLibrary message. Also converts values to other types if specified.
             * @param message PedestrianLibrary
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.PedestrianLibrary, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this PedestrianLibrary to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace PedestrianLibrary {

            /** Properties of a PedestrianTemplate. */
            interface IPedestrianTemplate {

                /** PedestrianTemplate name */
                name?: (string|null);

                /** PedestrianTemplate otherNames */
                otherNames?: (string[]|null);

                /** PedestrianTemplate prefab */
                prefab?: (string|null);

                /** PedestrianTemplate type */
                type?: (metamoto.types.Pedestrian.Type|null);

                /** PedestrianTemplate weight */
                weight?: (number|null);
            }

            /** Represents a PedestrianTemplate. */
            class PedestrianTemplate implements IPedestrianTemplate {

                /**
                 * Constructs a new PedestrianTemplate.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.PedestrianLibrary.IPedestrianTemplate);

                /** PedestrianTemplate name. */
                public name: string;

                /** PedestrianTemplate otherNames. */
                public otherNames: string[];

                /** PedestrianTemplate prefab. */
                public prefab: string;

                /** PedestrianTemplate type. */
                public type: metamoto.types.Pedestrian.Type;

                /** PedestrianTemplate weight. */
                public weight: number;

                /**
                 * Creates a new PedestrianTemplate instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns PedestrianTemplate instance
                 */
                public static create(properties?: metamoto.types.PedestrianLibrary.IPedestrianTemplate): metamoto.types.PedestrianLibrary.PedestrianTemplate;

                /**
                 * Encodes the specified PedestrianTemplate message. Does not implicitly {@link metamoto.types.PedestrianLibrary.PedestrianTemplate.verify|verify} messages.
                 * @param message PedestrianTemplate message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.PedestrianLibrary.IPedestrianTemplate, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified PedestrianTemplate message, length delimited. Does not implicitly {@link metamoto.types.PedestrianLibrary.PedestrianTemplate.verify|verify} messages.
                 * @param message PedestrianTemplate message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.PedestrianLibrary.IPedestrianTemplate, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a PedestrianTemplate message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns PedestrianTemplate
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PedestrianLibrary.PedestrianTemplate;

                /**
                 * Decodes a PedestrianTemplate message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns PedestrianTemplate
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PedestrianLibrary.PedestrianTemplate;

                /**
                 * Verifies a PedestrianTemplate message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a PedestrianTemplate message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns PedestrianTemplate
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.PedestrianLibrary.PedestrianTemplate;

                /**
                 * Creates a plain object from a PedestrianTemplate message. Also converts values to other types if specified.
                 * @param message PedestrianTemplate
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.PedestrianLibrary.PedestrianTemplate, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this PedestrianTemplate to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a PerceptionObject. */
        interface IPerceptionObject {

            /** PerceptionObject objectId */
            objectId?: (number|null);

            /** PerceptionObject objectType */
            objectType?: (metamoto.types.ObjectType|null);

            /** PerceptionObject shape */
            shape?: (metamoto.types.IShape|null);

            /** PerceptionObject trackingTime */
            trackingTime?: (number|null);

            /** PerceptionObject globalFrame */
            globalFrame?: (metamoto.types.IGlobalFrame|null);

            /** PerceptionObject localFrame */
            localFrame?: (metamoto.types.ILocalFrame|null);

            /** PerceptionObject headLights */
            headLights?: (metamoto.types.Vehicle.LightState|null);

            /** PerceptionObject reverseLights */
            reverseLights?: (metamoto.types.Vehicle.LightState|null);

            /** PerceptionObject brakeLights */
            brakeLights?: (metamoto.types.Vehicle.LightState|null);

            /** PerceptionObject signalLights */
            signalLights?: (metamoto.types.Vehicle.SignalLightState|null);

            /** PerceptionObject trafficLightBulbs */
            trafficLightBulbs?: (metamoto.types.PerceptionObject.ITrafficLightBulb[]|null);
        }

        /** Represents a PerceptionObject. */
        class PerceptionObject implements IPerceptionObject {

            /**
             * Constructs a new PerceptionObject.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IPerceptionObject);

            /** PerceptionObject objectId. */
            public objectId: number;

            /** PerceptionObject objectType. */
            public objectType: metamoto.types.ObjectType;

            /** PerceptionObject shape. */
            public shape?: (metamoto.types.IShape|null);

            /** PerceptionObject trackingTime. */
            public trackingTime: number;

            /** PerceptionObject globalFrame. */
            public globalFrame?: (metamoto.types.IGlobalFrame|null);

            /** PerceptionObject localFrame. */
            public localFrame?: (metamoto.types.ILocalFrame|null);

            /** PerceptionObject headLights. */
            public headLights: metamoto.types.Vehicle.LightState;

            /** PerceptionObject reverseLights. */
            public reverseLights: metamoto.types.Vehicle.LightState;

            /** PerceptionObject brakeLights. */
            public brakeLights: metamoto.types.Vehicle.LightState;

            /** PerceptionObject signalLights. */
            public signalLights: metamoto.types.Vehicle.SignalLightState;

            /** PerceptionObject trafficLightBulbs. */
            public trafficLightBulbs: metamoto.types.PerceptionObject.ITrafficLightBulb[];

            /**
             * Creates a new PerceptionObject instance using the specified properties.
             * @param [properties] Properties to set
             * @returns PerceptionObject instance
             */
            public static create(properties?: metamoto.types.IPerceptionObject): metamoto.types.PerceptionObject;

            /**
             * Encodes the specified PerceptionObject message. Does not implicitly {@link metamoto.types.PerceptionObject.verify|verify} messages.
             * @param message PerceptionObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IPerceptionObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified PerceptionObject message, length delimited. Does not implicitly {@link metamoto.types.PerceptionObject.verify|verify} messages.
             * @param message PerceptionObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IPerceptionObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a PerceptionObject message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns PerceptionObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PerceptionObject;

            /**
             * Decodes a PerceptionObject message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns PerceptionObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PerceptionObject;

            /**
             * Verifies a PerceptionObject message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a PerceptionObject message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns PerceptionObject
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.PerceptionObject;

            /**
             * Creates a plain object from a PerceptionObject message. Also converts values to other types if specified.
             * @param message PerceptionObject
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.PerceptionObject, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this PerceptionObject to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace PerceptionObject {

            /** Properties of a TrafficLightBulb. */
            interface ITrafficLightBulb {

                /** TrafficLightBulb type */
                type?: (metamoto.types.SignalConfiguration.Signal.IBulbType|null);

                /** TrafficLightBulb state */
                state?: (metamoto.types.SignalConfiguration.Signal.IBulbState|null);
            }

            /** Represents a TrafficLightBulb. */
            class TrafficLightBulb implements ITrafficLightBulb {

                /**
                 * Constructs a new TrafficLightBulb.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.PerceptionObject.ITrafficLightBulb);

                /** TrafficLightBulb type. */
                public type?: (metamoto.types.SignalConfiguration.Signal.IBulbType|null);

                /** TrafficLightBulb state. */
                public state?: (metamoto.types.SignalConfiguration.Signal.IBulbState|null);

                /**
                 * Creates a new TrafficLightBulb instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns TrafficLightBulb instance
                 */
                public static create(properties?: metamoto.types.PerceptionObject.ITrafficLightBulb): metamoto.types.PerceptionObject.TrafficLightBulb;

                /**
                 * Encodes the specified TrafficLightBulb message. Does not implicitly {@link metamoto.types.PerceptionObject.TrafficLightBulb.verify|verify} messages.
                 * @param message TrafficLightBulb message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.PerceptionObject.ITrafficLightBulb, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified TrafficLightBulb message, length delimited. Does not implicitly {@link metamoto.types.PerceptionObject.TrafficLightBulb.verify|verify} messages.
                 * @param message TrafficLightBulb message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.PerceptionObject.ITrafficLightBulb, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a TrafficLightBulb message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns TrafficLightBulb
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PerceptionObject.TrafficLightBulb;

                /**
                 * Decodes a TrafficLightBulb message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns TrafficLightBulb
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PerceptionObject.TrafficLightBulb;

                /**
                 * Verifies a TrafficLightBulb message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a TrafficLightBulb message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns TrafficLightBulb
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.PerceptionObject.TrafficLightBulb;

                /**
                 * Creates a plain object from a TrafficLightBulb message. Also converts values to other types if specified.
                 * @param message TrafficLightBulb
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.PerceptionObject.TrafficLightBulb, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this TrafficLightBulb to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a LocalFrame. */
        interface ILocalFrame {

            /** LocalFrame range */
            range?: (number|null);

            /** LocalFrame azimuthAngle */
            azimuthAngle?: (number|null);

            /** LocalFrame elevationAngle */
            elevationAngle?: (number|null);

            /** LocalFrame radialSpeed */
            radialSpeed?: (number|null);

            /** LocalFrame crossSpeed */
            crossSpeed?: (number|null);
        }

        /** Represents a LocalFrame. */
        class LocalFrame implements ILocalFrame {

            /**
             * Constructs a new LocalFrame.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILocalFrame);

            /** LocalFrame range. */
            public range: number;

            /** LocalFrame azimuthAngle. */
            public azimuthAngle: number;

            /** LocalFrame elevationAngle. */
            public elevationAngle: number;

            /** LocalFrame radialSpeed. */
            public radialSpeed: number;

            /** LocalFrame crossSpeed. */
            public crossSpeed: number;

            /**
             * Creates a new LocalFrame instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LocalFrame instance
             */
            public static create(properties?: metamoto.types.ILocalFrame): metamoto.types.LocalFrame;

            /**
             * Encodes the specified LocalFrame message. Does not implicitly {@link metamoto.types.LocalFrame.verify|verify} messages.
             * @param message LocalFrame message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILocalFrame, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LocalFrame message, length delimited. Does not implicitly {@link metamoto.types.LocalFrame.verify|verify} messages.
             * @param message LocalFrame message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILocalFrame, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LocalFrame message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LocalFrame
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.LocalFrame;

            /**
             * Decodes a LocalFrame message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LocalFrame
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.LocalFrame;

            /**
             * Verifies a LocalFrame message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LocalFrame message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LocalFrame
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.LocalFrame;

            /**
             * Creates a plain object from a LocalFrame message. Also converts values to other types if specified.
             * @param message LocalFrame
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.LocalFrame, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LocalFrame to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a GlobalFrame. */
        interface IGlobalFrame {

            /** GlobalFrame pose */
            pose?: (metamoto.types.IPose|null);

            /** GlobalFrame velocity */
            velocity?: (metamoto.types.IVelocity|null);

            /** GlobalFrame acceleration */
            acceleration?: (metamoto.types.IAcceleration|null);
        }

        /** Represents a GlobalFrame. */
        class GlobalFrame implements IGlobalFrame {

            /**
             * Constructs a new GlobalFrame.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IGlobalFrame);

            /** GlobalFrame pose. */
            public pose?: (metamoto.types.IPose|null);

            /** GlobalFrame velocity. */
            public velocity?: (metamoto.types.IVelocity|null);

            /** GlobalFrame acceleration. */
            public acceleration?: (metamoto.types.IAcceleration|null);

            /**
             * Creates a new GlobalFrame instance using the specified properties.
             * @param [properties] Properties to set
             * @returns GlobalFrame instance
             */
            public static create(properties?: metamoto.types.IGlobalFrame): metamoto.types.GlobalFrame;

            /**
             * Encodes the specified GlobalFrame message. Does not implicitly {@link metamoto.types.GlobalFrame.verify|verify} messages.
             * @param message GlobalFrame message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IGlobalFrame, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified GlobalFrame message, length delimited. Does not implicitly {@link metamoto.types.GlobalFrame.verify|verify} messages.
             * @param message GlobalFrame message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IGlobalFrame, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a GlobalFrame message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns GlobalFrame
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.GlobalFrame;

            /**
             * Decodes a GlobalFrame message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns GlobalFrame
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.GlobalFrame;

            /**
             * Verifies a GlobalFrame message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a GlobalFrame message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns GlobalFrame
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.GlobalFrame;

            /**
             * Creates a plain object from a GlobalFrame message. Also converts values to other types if specified.
             * @param message GlobalFrame
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.GlobalFrame, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this GlobalFrame to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Pose. */
        interface IPose {

            /** Pose position */
            position?: (metamoto.types.IVector3|null);

            /** Pose orientation */
            orientation?: (metamoto.types.IQuaternion|null);
        }

        /** Represents a Pose. */
        class Pose implements IPose {

            /**
             * Constructs a new Pose.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IPose);

            /** Pose position. */
            public position?: (metamoto.types.IVector3|null);

            /** Pose orientation. */
            public orientation?: (metamoto.types.IQuaternion|null);

            /**
             * Creates a new Pose instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Pose instance
             */
            public static create(properties?: metamoto.types.IPose): metamoto.types.Pose;

            /**
             * Encodes the specified Pose message. Does not implicitly {@link metamoto.types.Pose.verify|verify} messages.
             * @param message Pose message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IPose, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Pose message, length delimited. Does not implicitly {@link metamoto.types.Pose.verify|verify} messages.
             * @param message Pose message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IPose, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Pose message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Pose
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Pose;

            /**
             * Decodes a Pose message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Pose
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Pose;

            /**
             * Verifies a Pose message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Pose message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Pose
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Pose;

            /**
             * Creates a plain object from a Pose message. Also converts values to other types if specified.
             * @param message Pose
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Pose, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Pose to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Quaternion. */
        interface IQuaternion {

            /** Quaternion x */
            x?: (number|null);

            /** Quaternion y */
            y?: (number|null);

            /** Quaternion z */
            z?: (number|null);

            /** Quaternion w */
            w?: (number|null);
        }

        /** Represents a Quaternion. */
        class Quaternion implements IQuaternion {

            /**
             * Constructs a new Quaternion.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IQuaternion);

            /** Quaternion x. */
            public x: number;

            /** Quaternion y. */
            public y: number;

            /** Quaternion z. */
            public z: number;

            /** Quaternion w. */
            public w: number;

            /**
             * Creates a new Quaternion instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Quaternion instance
             */
            public static create(properties?: metamoto.types.IQuaternion): metamoto.types.Quaternion;

            /**
             * Encodes the specified Quaternion message. Does not implicitly {@link metamoto.types.Quaternion.verify|verify} messages.
             * @param message Quaternion message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IQuaternion, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Quaternion message, length delimited. Does not implicitly {@link metamoto.types.Quaternion.verify|verify} messages.
             * @param message Quaternion message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IQuaternion, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Quaternion message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Quaternion
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Quaternion;

            /**
             * Decodes a Quaternion message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Quaternion
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Quaternion;

            /**
             * Verifies a Quaternion message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Quaternion message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Quaternion
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Quaternion;

            /**
             * Creates a plain object from a Quaternion message. Also converts values to other types if specified.
             * @param message Quaternion
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Quaternion, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Quaternion to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a RadarObject. */
        interface IRadarObject {

            /** RadarObject internalId */
            internalId?: (number|null);

            /** RadarObject objectId */
            objectId?: (number|null);

            /** RadarObject objectType */
            objectType?: (metamoto.types.ObjectType|null);

            /** RadarObject status */
            status?: (metamoto.types.RadarObject.Status|null);

            /** RadarObject range */
            range?: (number|null);

            /** RadarObject rangeRate */
            rangeRate?: (number|null);

            /** RadarObject rangeAcceleration */
            rangeAcceleration?: (number|null);

            /** RadarObject angle */
            angle?: (number|null);

            /** RadarObject width */
            width?: (number|null);

            /** RadarObject length */
            length?: (number|null);

            /** RadarObject positionX */
            positionX?: (number|null);

            /** RadarObject positionZ */
            positionZ?: (number|null);

            /** RadarObject velocityX */
            velocityX?: (number|null);

            /** RadarObject velocityZ */
            velocityZ?: (number|null);

            /** RadarObject accelerationZ */
            accelerationZ?: (number|null);

            /** RadarObject rcs */
            rcs?: (number|null);

            /** RadarObject snr */
            snr?: (number|null);
        }

        /** Represents a RadarObject. */
        class RadarObject implements IRadarObject {

            /**
             * Constructs a new RadarObject.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IRadarObject);

            /** RadarObject internalId. */
            public internalId: number;

            /** RadarObject objectId. */
            public objectId: number;

            /** RadarObject objectType. */
            public objectType: metamoto.types.ObjectType;

            /** RadarObject status. */
            public status: metamoto.types.RadarObject.Status;

            /** RadarObject range. */
            public range: number;

            /** RadarObject rangeRate. */
            public rangeRate: number;

            /** RadarObject rangeAcceleration. */
            public rangeAcceleration: number;

            /** RadarObject angle. */
            public angle: number;

            /** RadarObject width. */
            public width: number;

            /** RadarObject length. */
            public length: number;

            /** RadarObject positionX. */
            public positionX: number;

            /** RadarObject positionZ. */
            public positionZ: number;

            /** RadarObject velocityX. */
            public velocityX: number;

            /** RadarObject velocityZ. */
            public velocityZ: number;

            /** RadarObject accelerationZ. */
            public accelerationZ: number;

            /** RadarObject rcs. */
            public rcs: number;

            /** RadarObject snr. */
            public snr: number;

            /**
             * Creates a new RadarObject instance using the specified properties.
             * @param [properties] Properties to set
             * @returns RadarObject instance
             */
            public static create(properties?: metamoto.types.IRadarObject): metamoto.types.RadarObject;

            /**
             * Encodes the specified RadarObject message. Does not implicitly {@link metamoto.types.RadarObject.verify|verify} messages.
             * @param message RadarObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IRadarObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified RadarObject message, length delimited. Does not implicitly {@link metamoto.types.RadarObject.verify|verify} messages.
             * @param message RadarObject message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IRadarObject, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a RadarObject message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns RadarObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.RadarObject;

            /**
             * Decodes a RadarObject message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns RadarObject
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.RadarObject;

            /**
             * Verifies a RadarObject message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a RadarObject message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns RadarObject
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.RadarObject;

            /**
             * Creates a plain object from a RadarObject message. Also converts values to other types if specified.
             * @param message RadarObject
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.RadarObject, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this RadarObject to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace RadarObject {

            /** Status enum. */
            enum Status {
                STATUS_UNKNOWN = 0,
                STATUS_NEW_OBJECT = 1,
                STATUS_UPDATED = 2,
                STATUS_NOT_UPDATED = 3
            }
        }

        /** Properties of a NumericRange. */
        interface INumericRange {

            /** NumericRange min */
            min?: (number|null);

            /** NumericRange max */
            max?: (number|null);

            /** NumericRange step */
            step?: (number|null);
        }

        /** Represents a NumericRange. */
        class NumericRange implements INumericRange {

            /**
             * Constructs a new NumericRange.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.INumericRange);

            /** NumericRange min. */
            public min: number;

            /** NumericRange max. */
            public max: number;

            /** NumericRange step. */
            public step: number;

            /**
             * Creates a new NumericRange instance using the specified properties.
             * @param [properties] Properties to set
             * @returns NumericRange instance
             */
            public static create(properties?: metamoto.types.INumericRange): metamoto.types.NumericRange;

            /**
             * Encodes the specified NumericRange message. Does not implicitly {@link metamoto.types.NumericRange.verify|verify} messages.
             * @param message NumericRange message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.INumericRange, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified NumericRange message, length delimited. Does not implicitly {@link metamoto.types.NumericRange.verify|verify} messages.
             * @param message NumericRange message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.INumericRange, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a NumericRange message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns NumericRange
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.NumericRange;

            /**
             * Decodes a NumericRange message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns NumericRange
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.NumericRange;

            /**
             * Verifies a NumericRange message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a NumericRange message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns NumericRange
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.NumericRange;

            /**
             * Creates a plain object from a NumericRange message. Also converts values to other types if specified.
             * @param message NumericRange
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.NumericRange, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this NumericRange to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Range. */
        interface IRange {

            /** Range parameterName */
            parameterName?: (string|null);

            /** Range numericRanges */
            numericRanges?: (metamoto.types.INumericRange[]|null);

            /** Range values */
            values?: (google.protobuf.IValue[]|null);
        }

        /** Represents a Range. */
        class Range implements IRange {

            /**
             * Constructs a new Range.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IRange);

            /** Range parameterName. */
            public parameterName: string;

            /** Range numericRanges. */
            public numericRanges: metamoto.types.INumericRange[];

            /** Range values. */
            public values: google.protobuf.IValue[];

            /**
             * Creates a new Range instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Range instance
             */
            public static create(properties?: metamoto.types.IRange): metamoto.types.Range;

            /**
             * Encodes the specified Range message. Does not implicitly {@link metamoto.types.Range.verify|verify} messages.
             * @param message Range message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IRange, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Range message, length delimited. Does not implicitly {@link metamoto.types.Range.verify|verify} messages.
             * @param message Range message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IRange, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Range message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Range
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Range;

            /**
             * Decodes a Range message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Range
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Range;

            /**
             * Verifies a Range message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Range message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Range
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Range;

            /**
             * Creates a plain object from a Range message. Also converts values to other types if specified.
             * @param message Range
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Range, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Range to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Parameter. */
        interface IParameter {

            /** Parameter range */
            range?: (metamoto.types.IRange|null);

            /** Parameter selected */
            selected?: (metamoto.types.IRange|null);
        }

        /** Represents a Parameter. */
        class Parameter implements IParameter {

            /**
             * Constructs a new Parameter.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IParameter);

            /** Parameter range. */
            public range?: (metamoto.types.IRange|null);

            /** Parameter selected. */
            public selected?: (metamoto.types.IRange|null);

            /**
             * Creates a new Parameter instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Parameter instance
             */
            public static create(properties?: metamoto.types.IParameter): metamoto.types.Parameter;

            /**
             * Encodes the specified Parameter message. Does not implicitly {@link metamoto.types.Parameter.verify|verify} messages.
             * @param message Parameter message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IParameter, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Parameter message, length delimited. Does not implicitly {@link metamoto.types.Parameter.verify|verify} messages.
             * @param message Parameter message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IParameter, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Parameter message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Parameter
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Parameter;

            /**
             * Decodes a Parameter message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Parameter
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Parameter;

            /**
             * Verifies a Parameter message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Parameter message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Parameter
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Parameter;

            /**
             * Creates a plain object from a Parameter message. Also converts values to other types if specified.
             * @param message Parameter
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Parameter, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Parameter to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a ResultMetadata. */
        interface IResultMetadata {

            /** ResultMetadata name */
            name?: (string|null);

            /** ResultMetadata type */
            type?: (string|null);

            /** ResultMetadata format */
            format?: (string|null);

            /** ResultMetadata path */
            path?: (string|null);
        }

        /** Represents a ResultMetadata. */
        class ResultMetadata implements IResultMetadata {

            /**
             * Constructs a new ResultMetadata.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IResultMetadata);

            /** ResultMetadata name. */
            public name: string;

            /** ResultMetadata type. */
            public type: string;

            /** ResultMetadata format. */
            public format: string;

            /** ResultMetadata path. */
            public path: string;

            /**
             * Creates a new ResultMetadata instance using the specified properties.
             * @param [properties] Properties to set
             * @returns ResultMetadata instance
             */
            public static create(properties?: metamoto.types.IResultMetadata): metamoto.types.ResultMetadata;

            /**
             * Encodes the specified ResultMetadata message. Does not implicitly {@link metamoto.types.ResultMetadata.verify|verify} messages.
             * @param message ResultMetadata message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IResultMetadata, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified ResultMetadata message, length delimited. Does not implicitly {@link metamoto.types.ResultMetadata.verify|verify} messages.
             * @param message ResultMetadata message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IResultMetadata, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a ResultMetadata message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns ResultMetadata
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.ResultMetadata;

            /**
             * Decodes a ResultMetadata message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns ResultMetadata
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.ResultMetadata;

            /**
             * Verifies a ResultMetadata message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a ResultMetadata message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns ResultMetadata
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.ResultMetadata;

            /**
             * Creates a plain object from a ResultMetadata message. Also converts values to other types if specified.
             * @param message ResultMetadata
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.ResultMetadata, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this ResultMetadata to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Elevation. */
        interface IElevation {

            /** Elevation s */
            s?: (number|null);

            /** Elevation a */
            a?: (number|null);

            /** Elevation b */
            b?: (number|null);

            /** Elevation c */
            c?: (number|null);

            /** Elevation d */
            d?: (number|null);

            /** Elevation reversed */
            reversed?: (boolean|null);
        }

        /** Represents an Elevation. */
        class Elevation implements IElevation {

            /**
             * Constructs a new Elevation.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IElevation);

            /** Elevation s. */
            public s: number;

            /** Elevation a. */
            public a: number;

            /** Elevation b. */
            public b: number;

            /** Elevation c. */
            public c: number;

            /** Elevation d. */
            public d: number;

            /** Elevation reversed. */
            public reversed: boolean;

            /**
             * Creates a new Elevation instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Elevation instance
             */
            public static create(properties?: metamoto.types.IElevation): metamoto.types.Elevation;

            /**
             * Encodes the specified Elevation message. Does not implicitly {@link metamoto.types.Elevation.verify|verify} messages.
             * @param message Elevation message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IElevation, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Elevation message, length delimited. Does not implicitly {@link metamoto.types.Elevation.verify|verify} messages.
             * @param message Elevation message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IElevation, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Elevation message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Elevation
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Elevation;

            /**
             * Decodes an Elevation message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Elevation
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Elevation;

            /**
             * Verifies an Elevation message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Elevation message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Elevation
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Elevation;

            /**
             * Creates a plain object from an Elevation message. Also converts values to other types if specified.
             * @param message Elevation
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Elevation, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Elevation to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Geometry. */
        interface IGeometry {

            /** Geometry type */
            type?: (metamoto.types.Geometry.Type|null);

            /** Geometry start */
            start?: (metamoto.types.IVector3|null);

            /** Geometry heading */
            heading?: (metamoto.types.IVector3|null);

            /** Geometry s */
            s?: (number|null);

            /** Geometry length */
            length?: (number|null);

            /** Geometry arc */
            arc?: (metamoto.types.Geometry.IArc|null);
        }

        /** Represents a Geometry. */
        class Geometry implements IGeometry {

            /**
             * Constructs a new Geometry.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IGeometry);

            /** Geometry type. */
            public type: metamoto.types.Geometry.Type;

            /** Geometry start. */
            public start?: (metamoto.types.IVector3|null);

            /** Geometry heading. */
            public heading?: (metamoto.types.IVector3|null);

            /** Geometry s. */
            public s: number;

            /** Geometry length. */
            public length: number;

            /** Geometry arc. */
            public arc?: (metamoto.types.Geometry.IArc|null);

            /**
             * Creates a new Geometry instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Geometry instance
             */
            public static create(properties?: metamoto.types.IGeometry): metamoto.types.Geometry;

            /**
             * Encodes the specified Geometry message. Does not implicitly {@link metamoto.types.Geometry.verify|verify} messages.
             * @param message Geometry message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IGeometry, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Geometry message, length delimited. Does not implicitly {@link metamoto.types.Geometry.verify|verify} messages.
             * @param message Geometry message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IGeometry, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Geometry message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Geometry
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Geometry;

            /**
             * Decodes a Geometry message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Geometry
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Geometry;

            /**
             * Verifies a Geometry message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Geometry message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Geometry
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Geometry;

            /**
             * Creates a plain object from a Geometry message. Also converts values to other types if specified.
             * @param message Geometry
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Geometry, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Geometry to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Geometry {

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                STRAIGHT_LINE = 2,
                ARC = 3
            }

            /** Properties of an Arc. */
            interface IArc {

                /** Arc radius */
                radius?: (number|null);

                /** Arc angle */
                angle?: (number|null);

                /** Arc center */
                center?: (metamoto.types.IVector3|null);
            }

            /** Represents an Arc. */
            class Arc implements IArc {

                /**
                 * Constructs a new Arc.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Geometry.IArc);

                /** Arc radius. */
                public radius: number;

                /** Arc angle. */
                public angle: number;

                /** Arc center. */
                public center?: (metamoto.types.IVector3|null);

                /**
                 * Creates a new Arc instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Arc instance
                 */
                public static create(properties?: metamoto.types.Geometry.IArc): metamoto.types.Geometry.Arc;

                /**
                 * Encodes the specified Arc message. Does not implicitly {@link metamoto.types.Geometry.Arc.verify|verify} messages.
                 * @param message Arc message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Geometry.IArc, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Arc message, length delimited. Does not implicitly {@link metamoto.types.Geometry.Arc.verify|verify} messages.
                 * @param message Arc message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Geometry.IArc, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes an Arc message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Arc
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Geometry.Arc;

                /**
                 * Decodes an Arc message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Arc
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Geometry.Arc;

                /**
                 * Verifies an Arc message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates an Arc message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Arc
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Geometry.Arc;

                /**
                 * Creates a plain object from an Arc message. Also converts values to other types if specified.
                 * @param message Arc
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Geometry.Arc, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Arc to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a Marking. */
        interface IMarking {

            /** Marking type */
            type?: (metamoto.types.Marking.Type|null);

            /** Marking color */
            color?: (metamoto.types.Marking.Color|null);

            /** Marking s */
            s?: (google.protobuf.IFloatValue|null);

            /** Marking t */
            t?: (google.protobuf.IFloatValue|null);

            /** Marking headingOffset */
            headingOffset?: (number|null);
        }

        /** Represents a Marking. */
        class Marking implements IMarking {

            /**
             * Constructs a new Marking.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IMarking);

            /** Marking type. */
            public type: metamoto.types.Marking.Type;

            /** Marking color. */
            public color: metamoto.types.Marking.Color;

            /** Marking s. */
            public s?: (google.protobuf.IFloatValue|null);

            /** Marking t. */
            public t?: (google.protobuf.IFloatValue|null);

            /** Marking headingOffset. */
            public headingOffset: number;

            /**
             * Creates a new Marking instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Marking instance
             */
            public static create(properties?: metamoto.types.IMarking): metamoto.types.Marking;

            /**
             * Encodes the specified Marking message. Does not implicitly {@link metamoto.types.Marking.verify|verify} messages.
             * @param message Marking message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IMarking, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Marking message, length delimited. Does not implicitly {@link metamoto.types.Marking.verify|verify} messages.
             * @param message Marking message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IMarking, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Marking message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Marking
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Marking;

            /**
             * Decodes a Marking message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Marking
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Marking;

            /**
             * Verifies a Marking message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Marking message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Marking
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Marking;

            /**
             * Creates a plain object from a Marking message. Also converts values to other types if specified.
             * @param message Marking
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Marking, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Marking to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Marking {

            /** Type enum. */
            enum Type {
                TYPE_UNKNOWN = 0,
                TYPE_OTHER = 1,
                SOLID = 2,
                DASH = 3,
                CURB = 4,
                DOUBLE_SOLID = 5,
                SOLID_RIGHT_DASH = 6,
                SOLID_LEFT_DASH = 7,
                PARALLEL_PARKING = 8,
                PERPENDICULAR_PARKING = 9,
                ANGLED_PARKING_60 = 10,
                CROSSWALK = 11,
                PARKING = 12
            }

            /** Color enum. */
            enum Color {
                COLOR_UNKNOWN = 0,
                COLOR_OTHER = 1,
                WHITE = 2,
                YELLOW = 3,
                RED = 4,
                GREEN = 5,
                BLUE = 6
            }
        }

        /** Properties of a Lane. */
        interface ILane {

            /** Lane index */
            index?: (number|null);

            /** Lane id */
            id?: (string|null);

            /** Lane type */
            type?: (metamoto.types.Lane.Type|null);

            /** Lane width0 */
            width0?: (number|null);

            /** Lane width1 */
            width1?: (number|null);

            /** Lane center0 */
            center0?: (number|null);

            /** Lane center1 */
            center1?: (number|null);

            /** Lane markings */
            markings?: (metamoto.types.IMarking[]|null);
        }

        /** Represents a Lane. */
        class Lane implements ILane {

            /**
             * Constructs a new Lane.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILane);

            /** Lane index. */
            public index: number;

            /** Lane id. */
            public id: string;

            /** Lane type. */
            public type: metamoto.types.Lane.Type;

            /** Lane width0. */
            public width0: number;

            /** Lane width1. */
            public width1: number;

            /** Lane center0. */
            public center0: number;

            /** Lane center1. */
            public center1: number;

            /** Lane markings. */
            public markings: metamoto.types.IMarking[];

            /**
             * Creates a new Lane instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Lane instance
             */
            public static create(properties?: metamoto.types.ILane): metamoto.types.Lane;

            /**
             * Encodes the specified Lane message. Does not implicitly {@link metamoto.types.Lane.verify|verify} messages.
             * @param message Lane message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILane, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Lane message, length delimited. Does not implicitly {@link metamoto.types.Lane.verify|verify} messages.
             * @param message Lane message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILane, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Lane message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Lane
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Lane;

            /**
             * Decodes a Lane message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Lane
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Lane;

            /**
             * Verifies a Lane message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Lane message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Lane
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Lane;

            /**
             * Creates a plain object from a Lane message. Also converts values to other types if specified.
             * @param message Lane
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Lane, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Lane to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Lane {

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                MEDIAN = 2,
                CAR_LANE = 3,
                PARALLEL_PARKING_LANE = 4,
                BIKE_LANE = 5,
                SHOULDER = 6,
                PERPENDICULAR_PARKING_LANE = 7,
                ANGLED_PARKING_60_LANE = 8,
                PARKING_LANE = 9
            }
        }

        /** Properties of a LaneLink. */
        interface ILaneLink {

            /** LaneLink fromLaneIndex */
            fromLaneIndex?: (number|null);

            /** LaneLink toLaneIndex */
            toLaneIndex?: (number|null);

            /** LaneLink fromLaneId */
            fromLaneId?: (string|null);

            /** LaneLink toLaneId */
            toLaneId?: (string|null);

            /** LaneLink laneIndex */
            laneIndex?: (number|null);

            /** LaneLink laneId */
            laneId?: (string|null);
        }

        /** Represents a LaneLink. */
        class LaneLink implements ILaneLink {

            /**
             * Constructs a new LaneLink.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILaneLink);

            /** LaneLink fromLaneIndex. */
            public fromLaneIndex: number;

            /** LaneLink toLaneIndex. */
            public toLaneIndex: number;

            /** LaneLink fromLaneId. */
            public fromLaneId: string;

            /** LaneLink toLaneId. */
            public toLaneId: string;

            /** LaneLink laneIndex. */
            public laneIndex: number;

            /** LaneLink laneId. */
            public laneId: string;

            /**
             * Creates a new LaneLink instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LaneLink instance
             */
            public static create(properties?: metamoto.types.ILaneLink): metamoto.types.LaneLink;

            /**
             * Encodes the specified LaneLink message. Does not implicitly {@link metamoto.types.LaneLink.verify|verify} messages.
             * @param message LaneLink message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILaneLink, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LaneLink message, length delimited. Does not implicitly {@link metamoto.types.LaneLink.verify|verify} messages.
             * @param message LaneLink message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILaneLink, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LaneLink message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LaneLink
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.LaneLink;

            /**
             * Decodes a LaneLink message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LaneLink
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.LaneLink;

            /**
             * Verifies a LaneLink message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LaneLink message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LaneLink
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.LaneLink;

            /**
             * Creates a plain object from a LaneLink message. Also converts values to other types if specified.
             * @param message LaneLink
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.LaneLink, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LaneLink to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Signal. */
        interface ISignal {

            /** Signal id */
            id?: (string|null);

            /** Signal type */
            type?: (metamoto.types.Signal.Type|null);

            /** Signal s */
            s?: (number|null);

            /** Signal laneValidity */
            laneValidity?: (metamoto.types.Signal.ILaneValidity|null);
        }

        /** Represents a Signal. */
        class Signal implements ISignal {

            /**
             * Constructs a new Signal.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISignal);

            /** Signal id. */
            public id: string;

            /** Signal type. */
            public type: metamoto.types.Signal.Type;

            /** Signal s. */
            public s: number;

            /** Signal laneValidity. */
            public laneValidity?: (metamoto.types.Signal.ILaneValidity|null);

            /**
             * Creates a new Signal instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Signal instance
             */
            public static create(properties?: metamoto.types.ISignal): metamoto.types.Signal;

            /**
             * Encodes the specified Signal message. Does not implicitly {@link metamoto.types.Signal.verify|verify} messages.
             * @param message Signal message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISignal, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Signal message, length delimited. Does not implicitly {@link metamoto.types.Signal.verify|verify} messages.
             * @param message Signal message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISignal, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Signal message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Signal
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Signal;

            /**
             * Decodes a Signal message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Signal
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Signal;

            /**
             * Verifies a Signal message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Signal message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Signal
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Signal;

            /**
             * Creates a plain object from a Signal message. Also converts values to other types if specified.
             * @param message Signal
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Signal, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Signal to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Signal {

            /** Properties of a LaneValidity. */
            interface ILaneValidity {

                /** LaneValidity fromLaneIndex */
                fromLaneIndex?: (number|null);

                /** LaneValidity toLaneIndex */
                toLaneIndex?: (number|null);
            }

            /** Represents a LaneValidity. */
            class LaneValidity implements ILaneValidity {

                /**
                 * Constructs a new LaneValidity.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Signal.ILaneValidity);

                /** LaneValidity fromLaneIndex. */
                public fromLaneIndex: number;

                /** LaneValidity toLaneIndex. */
                public toLaneIndex: number;

                /**
                 * Creates a new LaneValidity instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns LaneValidity instance
                 */
                public static create(properties?: metamoto.types.Signal.ILaneValidity): metamoto.types.Signal.LaneValidity;

                /**
                 * Encodes the specified LaneValidity message. Does not implicitly {@link metamoto.types.Signal.LaneValidity.verify|verify} messages.
                 * @param message LaneValidity message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Signal.ILaneValidity, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified LaneValidity message, length delimited. Does not implicitly {@link metamoto.types.Signal.LaneValidity.verify|verify} messages.
                 * @param message LaneValidity message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Signal.ILaneValidity, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a LaneValidity message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns LaneValidity
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Signal.LaneValidity;

                /**
                 * Decodes a LaneValidity message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns LaneValidity
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Signal.LaneValidity;

                /**
                 * Verifies a LaneValidity message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a LaneValidity message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns LaneValidity
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Signal.LaneValidity;

                /**
                 * Creates a plain object from a LaneValidity message. Also converts values to other types if specified.
                 * @param message LaneValidity
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Signal.LaneValidity, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this LaneValidity to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                LIGHT = 2,
                LEFT_TURN_LIGHT = 3,
                RIGHT_TURN_LIGHT = 4,
                STOP = 5,
                YIELD = 6,
                IMPLICIT_YIELD = 7,
                DISCONTINUITY = 8
            }
        }

        /** Properties of a ConnectingRoad. */
        interface IConnectingRoad {

            /** ConnectingRoad inJunctionId */
            inJunctionId?: (string|null);

            /** ConnectingRoad type */
            type?: (metamoto.types.ConnectingRoad.Direction|null);

            /** ConnectingRoad laneLinks */
            laneLinks?: (metamoto.types.ILaneLink[]|null);
        }

        /** Represents a ConnectingRoad. */
        class ConnectingRoad implements IConnectingRoad {

            /**
             * Constructs a new ConnectingRoad.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IConnectingRoad);

            /** ConnectingRoad inJunctionId. */
            public inJunctionId: string;

            /** ConnectingRoad type. */
            public type: metamoto.types.ConnectingRoad.Direction;

            /** ConnectingRoad laneLinks. */
            public laneLinks: metamoto.types.ILaneLink[];

            /**
             * Creates a new ConnectingRoad instance using the specified properties.
             * @param [properties] Properties to set
             * @returns ConnectingRoad instance
             */
            public static create(properties?: metamoto.types.IConnectingRoad): metamoto.types.ConnectingRoad;

            /**
             * Encodes the specified ConnectingRoad message. Does not implicitly {@link metamoto.types.ConnectingRoad.verify|verify} messages.
             * @param message ConnectingRoad message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IConnectingRoad, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified ConnectingRoad message, length delimited. Does not implicitly {@link metamoto.types.ConnectingRoad.verify|verify} messages.
             * @param message ConnectingRoad message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IConnectingRoad, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a ConnectingRoad message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns ConnectingRoad
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.ConnectingRoad;

            /**
             * Decodes a ConnectingRoad message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns ConnectingRoad
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.ConnectingRoad;

            /**
             * Verifies a ConnectingRoad message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a ConnectingRoad message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns ConnectingRoad
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.ConnectingRoad;

            /**
             * Creates a plain object from a ConnectingRoad message. Also converts values to other types if specified.
             * @param message ConnectingRoad
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.ConnectingRoad, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this ConnectingRoad to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace ConnectingRoad {

            /** Direction enum. */
            enum Direction {
                UNKNOWN = 0,
                OTHER = 1,
                STRAIGHT = 2,
                RIGHT = 3,
                LEFT = 4,
                UTURN = 5,
                SOFT_RIGHT = 6,
                SOFT_LEFT = 7
            }
        }

        /** Properties of a LaneSection. */
        interface ILaneSection {

            /** LaneSection s0 */
            s0?: (number|null);

            /** LaneSection s1 */
            s1?: (number|null);

            /** LaneSection lanes */
            lanes?: (metamoto.types.ILane[]|null);
        }

        /** Represents a LaneSection. */
        class LaneSection implements ILaneSection {

            /**
             * Constructs a new LaneSection.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ILaneSection);

            /** LaneSection s0. */
            public s0: number;

            /** LaneSection s1. */
            public s1: number;

            /** LaneSection lanes. */
            public lanes: metamoto.types.ILane[];

            /**
             * Creates a new LaneSection instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LaneSection instance
             */
            public static create(properties?: metamoto.types.ILaneSection): metamoto.types.LaneSection;

            /**
             * Encodes the specified LaneSection message. Does not implicitly {@link metamoto.types.LaneSection.verify|verify} messages.
             * @param message LaneSection message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ILaneSection, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LaneSection message, length delimited. Does not implicitly {@link metamoto.types.LaneSection.verify|verify} messages.
             * @param message LaneSection message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ILaneSection, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LaneSection message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LaneSection
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.LaneSection;

            /**
             * Decodes a LaneSection message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LaneSection
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.LaneSection;

            /**
             * Verifies a LaneSection message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LaneSection message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LaneSection
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.LaneSection;

            /**
             * Creates a plain object from a LaneSection message. Also converts values to other types if specified.
             * @param message LaneSection
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.LaneSection, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LaneSection to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Road. */
        interface IRoad {

            /** Road id */
            id?: (string|null);

            /** Road length */
            length?: (number|null);

            /** Road speedLimit */
            speedLimit?: (number|null);

            /** Road oneWay */
            oneWay?: (boolean|null);

            /** Road geometries */
            geometries?: (metamoto.types.IGeometry[]|null);

            /** Road laneSections */
            laneSections?: (metamoto.types.ILaneSection[]|null);

            /** Road signals */
            signals?: (metamoto.types.ISignal[]|null);

            /** Road connectingRoad */
            connectingRoad?: (metamoto.types.IConnectingRoad|null);

            /** Road predecessorRoadIds */
            predecessorRoadIds?: (string[]|null);

            /** Road successorRoadIds */
            successorRoadIds?: (string[]|null);

            /** Road predecessorJunctionId */
            predecessorJunctionId?: (string|null);

            /** Road successorJunctionId */
            successorJunctionId?: (string|null);

            /** Road elevation */
            elevation?: (metamoto.types.IElevation[]|null);
        }

        /** Represents a Road. */
        class Road implements IRoad {

            /**
             * Constructs a new Road.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IRoad);

            /** Road id. */
            public id: string;

            /** Road length. */
            public length: number;

            /** Road speedLimit. */
            public speedLimit: number;

            /** Road oneWay. */
            public oneWay: boolean;

            /** Road geometries. */
            public geometries: metamoto.types.IGeometry[];

            /** Road laneSections. */
            public laneSections: metamoto.types.ILaneSection[];

            /** Road signals. */
            public signals: metamoto.types.ISignal[];

            /** Road connectingRoad. */
            public connectingRoad?: (metamoto.types.IConnectingRoad|null);

            /** Road predecessorRoadIds. */
            public predecessorRoadIds: string[];

            /** Road successorRoadIds. */
            public successorRoadIds: string[];

            /** Road predecessorJunctionId. */
            public predecessorJunctionId: string;

            /** Road successorJunctionId. */
            public successorJunctionId: string;

            /** Road elevation. */
            public elevation: metamoto.types.IElevation[];

            /**
             * Creates a new Road instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Road instance
             */
            public static create(properties?: metamoto.types.IRoad): metamoto.types.Road;

            /**
             * Encodes the specified Road message. Does not implicitly {@link metamoto.types.Road.verify|verify} messages.
             * @param message Road message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IRoad, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Road message, length delimited. Does not implicitly {@link metamoto.types.Road.verify|verify} messages.
             * @param message Road message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IRoad, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Road message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Road
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Road;

            /**
             * Decodes a Road message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Road
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Road;

            /**
             * Verifies a Road message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Road message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Road
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Road;

            /**
             * Creates a plain object from a Road message. Also converts values to other types if specified.
             * @param message Road
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Road, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Road to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Junction. */
        interface IJunction {

            /** Junction id */
            id?: (string|null);

            /** Junction connections */
            connections?: (metamoto.types.Junction.IConnection[]|null);

            /** Junction approxLocation */
            approxLocation?: (metamoto.types.IVector3|null);

            /** Junction vectorId */
            vectorId?: (string|null);
        }

        /** Represents a Junction. */
        class Junction implements IJunction {

            /**
             * Constructs a new Junction.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IJunction);

            /** Junction id. */
            public id: string;

            /** Junction connections. */
            public connections: metamoto.types.Junction.IConnection[];

            /** Junction approxLocation. */
            public approxLocation?: (metamoto.types.IVector3|null);

            /** Junction vectorId. */
            public vectorId: string;

            /**
             * Creates a new Junction instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Junction instance
             */
            public static create(properties?: metamoto.types.IJunction): metamoto.types.Junction;

            /**
             * Encodes the specified Junction message. Does not implicitly {@link metamoto.types.Junction.verify|verify} messages.
             * @param message Junction message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IJunction, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Junction message, length delimited. Does not implicitly {@link metamoto.types.Junction.verify|verify} messages.
             * @param message Junction message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IJunction, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Junction message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Junction
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Junction;

            /**
             * Decodes a Junction message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Junction
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Junction;

            /**
             * Verifies a Junction message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Junction message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Junction
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Junction;

            /**
             * Creates a plain object from a Junction message. Also converts values to other types if specified.
             * @param message Junction
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Junction, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Junction to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Junction {

            /** Properties of a Connection. */
            interface IConnection {

                /** Connection fromRoad */
                fromRoad?: (metamoto.types.Junction.Connection.IRoadLink|null);

                /** Connection toRoad */
                toRoad?: (metamoto.types.Junction.Connection.IRoadLink|null);

                /** Connection connectingRoadId */
                connectingRoadId?: (string|null);
            }

            /** Represents a Connection. */
            class Connection implements IConnection {

                /**
                 * Constructs a new Connection.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Junction.IConnection);

                /** Connection fromRoad. */
                public fromRoad?: (metamoto.types.Junction.Connection.IRoadLink|null);

                /** Connection toRoad. */
                public toRoad?: (metamoto.types.Junction.Connection.IRoadLink|null);

                /** Connection connectingRoadId. */
                public connectingRoadId: string;

                /**
                 * Creates a new Connection instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Connection instance
                 */
                public static create(properties?: metamoto.types.Junction.IConnection): metamoto.types.Junction.Connection;

                /**
                 * Encodes the specified Connection message. Does not implicitly {@link metamoto.types.Junction.Connection.verify|verify} messages.
                 * @param message Connection message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Junction.IConnection, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Connection message, length delimited. Does not implicitly {@link metamoto.types.Junction.Connection.verify|verify} messages.
                 * @param message Connection message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Junction.IConnection, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Connection message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Connection
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Junction.Connection;

                /**
                 * Decodes a Connection message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Connection
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Junction.Connection;

                /**
                 * Verifies a Connection message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Connection message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Connection
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Junction.Connection;

                /**
                 * Creates a plain object from a Connection message. Also converts values to other types if specified.
                 * @param message Connection
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Junction.Connection, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Connection to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Connection {

                /** Properties of a RoadLink. */
                interface IRoadLink {

                    /** RoadLink roadId */
                    roadId?: (string|null);

                    /** RoadLink contactType */
                    contactType?: (metamoto.types.Junction.Connection.RoadLink.ContactType|null);
                }

                /** Represents a RoadLink. */
                class RoadLink implements IRoadLink {

                    /**
                     * Constructs a new RoadLink.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Junction.Connection.IRoadLink);

                    /** RoadLink roadId. */
                    public roadId: string;

                    /** RoadLink contactType. */
                    public contactType: metamoto.types.Junction.Connection.RoadLink.ContactType;

                    /**
                     * Creates a new RoadLink instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns RoadLink instance
                     */
                    public static create(properties?: metamoto.types.Junction.Connection.IRoadLink): metamoto.types.Junction.Connection.RoadLink;

                    /**
                     * Encodes the specified RoadLink message. Does not implicitly {@link metamoto.types.Junction.Connection.RoadLink.verify|verify} messages.
                     * @param message RoadLink message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Junction.Connection.IRoadLink, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified RoadLink message, length delimited. Does not implicitly {@link metamoto.types.Junction.Connection.RoadLink.verify|verify} messages.
                     * @param message RoadLink message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Junction.Connection.IRoadLink, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a RoadLink message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns RoadLink
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Junction.Connection.RoadLink;

                    /**
                     * Decodes a RoadLink message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns RoadLink
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Junction.Connection.RoadLink;

                    /**
                     * Verifies a RoadLink message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a RoadLink message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns RoadLink
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Junction.Connection.RoadLink;

                    /**
                     * Creates a plain object from a RoadLink message. Also converts values to other types if specified.
                     * @param message RoadLink
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Junction.Connection.RoadLink, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this RoadLink to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                namespace RoadLink {

                    /** ContactType enum. */
                    enum ContactType {
                        START = 0,
                        END = 1
                    }
                }
            }
        }

        /** Properties of a RoadNetwork. */
        interface IRoadNetwork {

            /** RoadNetwork id */
            id?: (string|null);

            /** RoadNetwork roads */
            roads?: (metamoto.types.IRoad[]|null);

            /** RoadNetwork junctions */
            junctions?: (metamoto.types.IJunction[]|null);

            /** RoadNetwork originCoordinates */
            originCoordinates?: (metamoto.types.IGeoCoordinates|null);
        }

        /** Represents a RoadNetwork. */
        class RoadNetwork implements IRoadNetwork {

            /**
             * Constructs a new RoadNetwork.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IRoadNetwork);

            /** RoadNetwork id. */
            public id: string;

            /** RoadNetwork roads. */
            public roads: metamoto.types.IRoad[];

            /** RoadNetwork junctions. */
            public junctions: metamoto.types.IJunction[];

            /** RoadNetwork originCoordinates. */
            public originCoordinates?: (metamoto.types.IGeoCoordinates|null);

            /**
             * Creates a new RoadNetwork instance using the specified properties.
             * @param [properties] Properties to set
             * @returns RoadNetwork instance
             */
            public static create(properties?: metamoto.types.IRoadNetwork): metamoto.types.RoadNetwork;

            /**
             * Encodes the specified RoadNetwork message. Does not implicitly {@link metamoto.types.RoadNetwork.verify|verify} messages.
             * @param message RoadNetwork message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IRoadNetwork, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified RoadNetwork message, length delimited. Does not implicitly {@link metamoto.types.RoadNetwork.verify|verify} messages.
             * @param message RoadNetwork message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IRoadNetwork, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a RoadNetwork message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns RoadNetwork
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.RoadNetwork;

            /**
             * Decodes a RoadNetwork message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns RoadNetwork
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.RoadNetwork;

            /**
             * Verifies a RoadNetwork message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a RoadNetwork message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns RoadNetwork
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.RoadNetwork;

            /**
             * Creates a plain object from a RoadNetwork message. Also converts values to other types if specified.
             * @param message RoadNetwork
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.RoadNetwork, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this RoadNetwork to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a RoadPoint. */
        interface IRoadPoint {

            /** RoadPoint roadId */
            roadId?: (string|null);

            /** RoadPoint laneSectionIndex */
            laneSectionIndex?: (number|null);

            /** RoadPoint laneIndex */
            laneIndex?: (number|null);

            /** RoadPoint s */
            s?: (number|null);

            /** RoadPoint t */
            t?: (number|null);

            /** RoadPoint headingOffset */
            headingOffset?: (number|null);

            /** RoadPoint worldPosition */
            worldPosition?: (metamoto.types.IVector3|null);
        }

        /** Represents a RoadPoint. */
        class RoadPoint implements IRoadPoint {

            /**
             * Constructs a new RoadPoint.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IRoadPoint);

            /** RoadPoint roadId. */
            public roadId: string;

            /** RoadPoint laneSectionIndex. */
            public laneSectionIndex: number;

            /** RoadPoint laneIndex. */
            public laneIndex: number;

            /** RoadPoint s. */
            public s: number;

            /** RoadPoint t. */
            public t: number;

            /** RoadPoint headingOffset. */
            public headingOffset: number;

            /** RoadPoint worldPosition. */
            public worldPosition?: (metamoto.types.IVector3|null);

            /**
             * Creates a new RoadPoint instance using the specified properties.
             * @param [properties] Properties to set
             * @returns RoadPoint instance
             */
            public static create(properties?: metamoto.types.IRoadPoint): metamoto.types.RoadPoint;

            /**
             * Encodes the specified RoadPoint message. Does not implicitly {@link metamoto.types.RoadPoint.verify|verify} messages.
             * @param message RoadPoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IRoadPoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified RoadPoint message, length delimited. Does not implicitly {@link metamoto.types.RoadPoint.verify|verify} messages.
             * @param message RoadPoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IRoadPoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a RoadPoint message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns RoadPoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.RoadPoint;

            /**
             * Decodes a RoadPoint message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns RoadPoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.RoadPoint;

            /**
             * Verifies a RoadPoint message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a RoadPoint message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns RoadPoint
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.RoadPoint;

            /**
             * Creates a plain object from a RoadPoint message. Also converts values to other types if specified.
             * @param message RoadPoint
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.RoadPoint, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this RoadPoint to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Scenario. */
        interface IScenario {

            /** Scenario id */
            id?: (string|null);

            /** Scenario name */
            name?: (string|null);

            /** Scenario scene */
            scene?: (string|null);

            /** Scenario description */
            description?: (string|null);

            /** Scenario readOnly */
            readOnly?: (boolean|null);

            /** Scenario version */
            version?: (metamoto.types.IVersion|null);

            /** Scenario system */
            system?: (metamoto.types.Scenario.ISystem|null);

            /** Scenario objectives */
            objectives?: (metamoto.types.Scenario.IObjectives|null);

            /** Scenario environment */
            environment?: (metamoto.types.IEnvironment|null);

            /** Scenario egoVehicle */
            egoVehicle?: (metamoto.types.Scenario.IEgoVehicle|null);

            /** Scenario traffic */
            traffic?: (metamoto.types.Scenario.ITraffic|null);

            /** Scenario pedestrians */
            pedestrians?: (metamoto.types.Scenario.IPedestrians|null);

            /** Scenario trafficLights */
            trafficLights?: ({ [k: string]: metamoto.types.Scenario.ITrafficLight }|null);

            /** Scenario events */
            events?: (metamoto.types.IEvent[]|null);

            /** Scenario assets */
            assets?: (metamoto.types.IAsset[]|null);

            /** Scenario egoVehicles */
            egoVehicles?: (metamoto.types.Scenario.IEgoVehicle[]|null);

            /** Scenario intersections */
            intersections?: ({ [k: string]: metamoto.types.Scenario.IIntersection }|null);

            /** Scenario ranges */
            ranges?: ({ [k: string]: metamoto.types.IRange }|null);
        }

        /** Represents a Scenario. */
        class Scenario implements IScenario {

            /**
             * Constructs a new Scenario.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IScenario);

            /** Scenario id. */
            public id: string;

            /** Scenario name. */
            public name: string;

            /** Scenario scene. */
            public scene: string;

            /** Scenario description. */
            public description: string;

            /** Scenario readOnly. */
            public readOnly: boolean;

            /** Scenario version. */
            public version?: (metamoto.types.IVersion|null);

            /** Scenario system. */
            public system?: (metamoto.types.Scenario.ISystem|null);

            /** Scenario objectives. */
            public objectives?: (metamoto.types.Scenario.IObjectives|null);

            /** Scenario environment. */
            public environment?: (metamoto.types.IEnvironment|null);

            /** Scenario egoVehicle. */
            public egoVehicle?: (metamoto.types.Scenario.IEgoVehicle|null);

            /** Scenario traffic. */
            public traffic?: (metamoto.types.Scenario.ITraffic|null);

            /** Scenario pedestrians. */
            public pedestrians?: (metamoto.types.Scenario.IPedestrians|null);

            /** Scenario trafficLights. */
            public trafficLights: { [k: string]: metamoto.types.Scenario.ITrafficLight };

            /** Scenario events. */
            public events: metamoto.types.IEvent[];

            /** Scenario assets. */
            public assets: metamoto.types.IAsset[];

            /** Scenario egoVehicles. */
            public egoVehicles: metamoto.types.Scenario.IEgoVehicle[];

            /** Scenario intersections. */
            public intersections: { [k: string]: metamoto.types.Scenario.IIntersection };

            /** Scenario ranges. */
            public ranges: { [k: string]: metamoto.types.IRange };

            /**
             * Creates a new Scenario instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Scenario instance
             */
            public static create(properties?: metamoto.types.IScenario): metamoto.types.Scenario;

            /**
             * Encodes the specified Scenario message. Does not implicitly {@link metamoto.types.Scenario.verify|verify} messages.
             * @param message Scenario message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IScenario, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Scenario message, length delimited. Does not implicitly {@link metamoto.types.Scenario.verify|verify} messages.
             * @param message Scenario message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IScenario, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Scenario message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Scenario
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario;

            /**
             * Decodes a Scenario message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Scenario
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario;

            /**
             * Verifies a Scenario message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Scenario message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Scenario
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario;

            /**
             * Creates a plain object from a Scenario message. Also converts values to other types if specified.
             * @param message Scenario
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Scenario, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Scenario to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Scenario {

            /** Properties of a System. */
            interface ISystem {

                /** System randomSeed */
                randomSeed?: (number|null);

                /** System host */
                host?: (string|null);

                /** System recordGroundTruth */
                recordGroundTruth?: (boolean|null);

                /** System profile */
                profile?: (boolean|null);

                /** System physicsRate */
                physicsRate?: (number|null);

                /** System encoder */
                encoder?: (metamoto.types.Scenario.System.IEncoder|null);

                /** System logger */
                logger?: (metamoto.types.Scenario.System.ILogger|null);

                /** System rayTracer */
                rayTracer?: (metamoto.types.Scenario.System.IRayTracer|null);

                /** System services */
                services?: ({ [k: string]: metamoto.types.Scenario.System.IService }|null);

                /** System cameraLod */
                cameraLod?: (metamoto.types.Scenario.System.LevelOfDetail|null);

                /** System rayTracerLod */
                rayTracerLod?: (metamoto.types.Scenario.System.LevelOfDetail|null);
            }

            /** Represents a System. */
            class System implements ISystem {

                /**
                 * Constructs a new System.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.ISystem);

                /** System randomSeed. */
                public randomSeed: number;

                /** System host. */
                public host: string;

                /** System recordGroundTruth. */
                public recordGroundTruth: boolean;

                /** System profile. */
                public profile: boolean;

                /** System physicsRate. */
                public physicsRate: number;

                /** System encoder. */
                public encoder?: (metamoto.types.Scenario.System.IEncoder|null);

                /** System logger. */
                public logger?: (metamoto.types.Scenario.System.ILogger|null);

                /** System rayTracer. */
                public rayTracer?: (metamoto.types.Scenario.System.IRayTracer|null);

                /** System services. */
                public services: { [k: string]: metamoto.types.Scenario.System.IService };

                /** System cameraLod. */
                public cameraLod: metamoto.types.Scenario.System.LevelOfDetail;

                /** System rayTracerLod. */
                public rayTracerLod: metamoto.types.Scenario.System.LevelOfDetail;

                /**
                 * Creates a new System instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns System instance
                 */
                public static create(properties?: metamoto.types.Scenario.ISystem): metamoto.types.Scenario.System;

                /**
                 * Encodes the specified System message. Does not implicitly {@link metamoto.types.Scenario.System.verify|verify} messages.
                 * @param message System message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.ISystem, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified System message, length delimited. Does not implicitly {@link metamoto.types.Scenario.System.verify|verify} messages.
                 * @param message System message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.ISystem, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a System message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns System
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.System;

                /**
                 * Decodes a System message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns System
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.System;

                /**
                 * Verifies a System message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a System message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns System
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.System;

                /**
                 * Creates a plain object from a System message. Also converts values to other types if specified.
                 * @param message System
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.System, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this System to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace System {

                /** Properties of an Encoder. */
                interface IEncoder {

                    /** Encoder ffmpegExe */
                    ffmpegExe?: (string|null);

                    /** Encoder ffmpegCodec */
                    ffmpegCodec?: (string|null);

                    /** Encoder ffmpegCodecOptions */
                    ffmpegCodecOptions?: (string|null);
                }

                /** Represents an Encoder. */
                class Encoder implements IEncoder {

                    /**
                     * Constructs a new Encoder.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.System.IEncoder);

                    /** Encoder ffmpegExe. */
                    public ffmpegExe: string;

                    /** Encoder ffmpegCodec. */
                    public ffmpegCodec: string;

                    /** Encoder ffmpegCodecOptions. */
                    public ffmpegCodecOptions: string;

                    /**
                     * Creates a new Encoder instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Encoder instance
                     */
                    public static create(properties?: metamoto.types.Scenario.System.IEncoder): metamoto.types.Scenario.System.Encoder;

                    /**
                     * Encodes the specified Encoder message. Does not implicitly {@link metamoto.types.Scenario.System.Encoder.verify|verify} messages.
                     * @param message Encoder message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.System.IEncoder, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Encoder message, length delimited. Does not implicitly {@link metamoto.types.Scenario.System.Encoder.verify|verify} messages.
                     * @param message Encoder message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.System.IEncoder, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes an Encoder message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Encoder
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.System.Encoder;

                    /**
                     * Decodes an Encoder message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Encoder
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.System.Encoder;

                    /**
                     * Verifies an Encoder message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates an Encoder message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Encoder
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.System.Encoder;

                    /**
                     * Creates a plain object from an Encoder message. Also converts values to other types if specified.
                     * @param message Encoder
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.System.Encoder, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Encoder to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a Logger. */
                interface ILogger {

                    /** Logger mode */
                    mode?: (string|null);

                    /** Logger filename */
                    filename?: (string|null);

                    /** Logger address */
                    address?: (string|null);

                    /** Logger port */
                    port?: (number|null);
                }

                /** Represents a Logger. */
                class Logger implements ILogger {

                    /**
                     * Constructs a new Logger.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.System.ILogger);

                    /** Logger mode. */
                    public mode: string;

                    /** Logger filename. */
                    public filename: string;

                    /** Logger address. */
                    public address: string;

                    /** Logger port. */
                    public port: number;

                    /**
                     * Creates a new Logger instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Logger instance
                     */
                    public static create(properties?: metamoto.types.Scenario.System.ILogger): metamoto.types.Scenario.System.Logger;

                    /**
                     * Encodes the specified Logger message. Does not implicitly {@link metamoto.types.Scenario.System.Logger.verify|verify} messages.
                     * @param message Logger message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.System.ILogger, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Logger message, length delimited. Does not implicitly {@link metamoto.types.Scenario.System.Logger.verify|verify} messages.
                     * @param message Logger message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.System.ILogger, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Logger message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Logger
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.System.Logger;

                    /**
                     * Decodes a Logger message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Logger
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.System.Logger;

                    /**
                     * Verifies a Logger message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Logger message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Logger
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.System.Logger;

                    /**
                     * Creates a plain object from a Logger message. Also converts values to other types if specified.
                     * @param message Logger
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.System.Logger, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Logger to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a RayTracer. */
                interface IRayTracer {

                    /** RayTracer url */
                    url?: (string|null);

                    /** RayTracer fileMode */
                    fileMode?: (boolean|null);

                    /** RayTracer fileThreshold */
                    fileThreshold?: (number|null);
                }

                /** Represents a RayTracer. */
                class RayTracer implements IRayTracer {

                    /**
                     * Constructs a new RayTracer.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.System.IRayTracer);

                    /** RayTracer url. */
                    public url: string;

                    /** RayTracer fileMode. */
                    public fileMode: boolean;

                    /** RayTracer fileThreshold. */
                    public fileThreshold: number;

                    /**
                     * Creates a new RayTracer instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns RayTracer instance
                     */
                    public static create(properties?: metamoto.types.Scenario.System.IRayTracer): metamoto.types.Scenario.System.RayTracer;

                    /**
                     * Encodes the specified RayTracer message. Does not implicitly {@link metamoto.types.Scenario.System.RayTracer.verify|verify} messages.
                     * @param message RayTracer message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.System.IRayTracer, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified RayTracer message, length delimited. Does not implicitly {@link metamoto.types.Scenario.System.RayTracer.verify|verify} messages.
                     * @param message RayTracer message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.System.IRayTracer, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a RayTracer message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns RayTracer
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.System.RayTracer;

                    /**
                     * Decodes a RayTracer message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns RayTracer
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.System.RayTracer;

                    /**
                     * Verifies a RayTracer message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a RayTracer message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns RayTracer
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.System.RayTracer;

                    /**
                     * Creates a plain object from a RayTracer message. Also converts values to other types if specified.
                     * @param message RayTracer
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.System.RayTracer, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this RayTracer to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a Service. */
                interface IService {

                    /** Service port */
                    port?: (number|null);

                    /** Service externalPort */
                    externalPort?: (number|null);
                }

                /** Represents a Service. */
                class Service implements IService {

                    /**
                     * Constructs a new Service.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.System.IService);

                    /** Service port. */
                    public port: number;

                    /** Service externalPort. */
                    public externalPort: number;

                    /**
                     * Creates a new Service instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Service instance
                     */
                    public static create(properties?: metamoto.types.Scenario.System.IService): metamoto.types.Scenario.System.Service;

                    /**
                     * Encodes the specified Service message. Does not implicitly {@link metamoto.types.Scenario.System.Service.verify|verify} messages.
                     * @param message Service message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.System.IService, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Service message, length delimited. Does not implicitly {@link metamoto.types.Scenario.System.Service.verify|verify} messages.
                     * @param message Service message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.System.IService, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Service message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Service
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.System.Service;

                    /**
                     * Decodes a Service message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Service
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.System.Service;

                    /**
                     * Verifies a Service message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Service message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Service
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.System.Service;

                    /**
                     * Creates a plain object from a Service message. Also converts values to other types if specified.
                     * @param message Service
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.System.Service, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Service to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** LevelOfDetail enum. */
                enum LevelOfDetail {
                    DYNAMIC = 0,
                    HIGH = 1,
                    MEDIUM = 2,
                    LOW = 3
                }
            }

            /** Properties of an Objectives. */
            interface IObjectives {

                /** Objectives duration */
                duration?: (number|null);

                /** Objectives destinationWorldPoint */
                destinationWorldPoint?: (metamoto.types.IVector3|null);

                /** Objectives destinationRoadPoint */
                destinationRoadPoint?: (metamoto.types.IRoadPoint|null);

                /** Objectives destinationRadius */
                destinationRadius?: (number|null);

                /** Objectives infractions */
                infractions?: (metamoto.types.IInfraction[]|null);

                /** Objectives randomFailureProbability */
                randomFailureProbability?: (number|null);

                /** Objectives monitorAllVehicles */
                monitorAllVehicles?: (boolean|null);
            }

            /** Represents an Objectives. */
            class Objectives implements IObjectives {

                /**
                 * Constructs a new Objectives.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.IObjectives);

                /** Objectives duration. */
                public duration: number;

                /** Objectives destinationWorldPoint. */
                public destinationWorldPoint?: (metamoto.types.IVector3|null);

                /** Objectives destinationRoadPoint. */
                public destinationRoadPoint?: (metamoto.types.IRoadPoint|null);

                /** Objectives destinationRadius. */
                public destinationRadius: number;

                /** Objectives infractions. */
                public infractions: metamoto.types.IInfraction[];

                /** Objectives randomFailureProbability. */
                public randomFailureProbability: number;

                /** Objectives monitorAllVehicles. */
                public monitorAllVehicles: boolean;

                /** Objectives destinationOneof. */
                public destinationOneof?: ("destinationWorldPoint"|"destinationRoadPoint");

                /**
                 * Creates a new Objectives instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Objectives instance
                 */
                public static create(properties?: metamoto.types.Scenario.IObjectives): metamoto.types.Scenario.Objectives;

                /**
                 * Encodes the specified Objectives message. Does not implicitly {@link metamoto.types.Scenario.Objectives.verify|verify} messages.
                 * @param message Objectives message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.IObjectives, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Objectives message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Objectives.verify|verify} messages.
                 * @param message Objectives message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.IObjectives, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes an Objectives message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Objectives
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Objectives;

                /**
                 * Decodes an Objectives message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Objectives
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Objectives;

                /**
                 * Verifies an Objectives message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates an Objectives message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Objectives
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Objectives;

                /**
                 * Creates a plain object from an Objectives message. Also converts values to other types if specified.
                 * @param message Objectives
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.Objectives, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Objectives to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of an EgoVehicle. */
            interface IEgoVehicle {

                /** EgoVehicle path */
                path?: (metamoto.types.IWaypoint[]|null);

                /** EgoVehicle driverModel */
                driverModel?: (metamoto.types.IDriverModel|null);

                /** EgoVehicle randomSpawnPoint */
                randomSpawnPoint?: (boolean|null);
            }

            /** Represents an EgoVehicle. */
            class EgoVehicle implements IEgoVehicle {

                /**
                 * Constructs a new EgoVehicle.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.IEgoVehicle);

                /** EgoVehicle path. */
                public path: metamoto.types.IWaypoint[];

                /** EgoVehicle driverModel. */
                public driverModel?: (metamoto.types.IDriverModel|null);

                /** EgoVehicle randomSpawnPoint. */
                public randomSpawnPoint: boolean;

                /**
                 * Creates a new EgoVehicle instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns EgoVehicle instance
                 */
                public static create(properties?: metamoto.types.Scenario.IEgoVehicle): metamoto.types.Scenario.EgoVehicle;

                /**
                 * Encodes the specified EgoVehicle message. Does not implicitly {@link metamoto.types.Scenario.EgoVehicle.verify|verify} messages.
                 * @param message EgoVehicle message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.IEgoVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified EgoVehicle message, length delimited. Does not implicitly {@link metamoto.types.Scenario.EgoVehicle.verify|verify} messages.
                 * @param message EgoVehicle message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.IEgoVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes an EgoVehicle message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns EgoVehicle
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.EgoVehicle;

                /**
                 * Decodes an EgoVehicle message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns EgoVehicle
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.EgoVehicle;

                /**
                 * Verifies an EgoVehicle message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates an EgoVehicle message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns EgoVehicle
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.EgoVehicle;

                /**
                 * Creates a plain object from an EgoVehicle message. Also converts values to other types if specified.
                 * @param message EgoVehicle
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.EgoVehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this EgoVehicle to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a Traffic. */
            interface ITraffic {

                /** Traffic region */
                region?: (metamoto.types.IVector3[]|null);

                /** Traffic distribution */
                distribution?: (metamoto.types.Scenario.Traffic.IDistribution|null);

                /** Traffic numRandomVehicles */
                numRandomVehicles?: (number|null);

                /** Traffic congestion */
                congestion?: (number|null);

                /** Traffic flows */
                flows?: (metamoto.types.ITrafficFlow[]|null);

                /** Traffic vehicles */
                vehicles?: (metamoto.types.ITrafficVehicle[]|null);

                /** Traffic parkedDistribution */
                parkedDistribution?: (metamoto.types.Scenario.Traffic.IDistribution|null);

                /** Traffic numRandomParkedVehicles */
                numRandomParkedVehicles?: (number|null);

                /** Traffic parkingFullness */
                parkingFullness?: (number|null);

                /** Traffic parkedVehicles */
                parkedVehicles?: (metamoto.types.IParkedVehicle[]|null);
            }

            /** Represents a Traffic. */
            class Traffic implements ITraffic {

                /**
                 * Constructs a new Traffic.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.ITraffic);

                /** Traffic region. */
                public region: metamoto.types.IVector3[];

                /** Traffic distribution. */
                public distribution?: (metamoto.types.Scenario.Traffic.IDistribution|null);

                /** Traffic numRandomVehicles. */
                public numRandomVehicles: number;

                /** Traffic congestion. */
                public congestion: number;

                /** Traffic flows. */
                public flows: metamoto.types.ITrafficFlow[];

                /** Traffic vehicles. */
                public vehicles: metamoto.types.ITrafficVehicle[];

                /** Traffic parkedDistribution. */
                public parkedDistribution?: (metamoto.types.Scenario.Traffic.IDistribution|null);

                /** Traffic numRandomParkedVehicles. */
                public numRandomParkedVehicles: number;

                /** Traffic parkingFullness. */
                public parkingFullness: number;

                /** Traffic parkedVehicles. */
                public parkedVehicles: metamoto.types.IParkedVehicle[];

                /** Traffic randomOneof. */
                public randomOneof?: ("numRandomVehicles"|"congestion");

                /** Traffic randomParkedOneof. */
                public randomParkedOneof?: ("numRandomParkedVehicles"|"parkingFullness");

                /**
                 * Creates a new Traffic instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Traffic instance
                 */
                public static create(properties?: metamoto.types.Scenario.ITraffic): metamoto.types.Scenario.Traffic;

                /**
                 * Encodes the specified Traffic message. Does not implicitly {@link metamoto.types.Scenario.Traffic.verify|verify} messages.
                 * @param message Traffic message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.ITraffic, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Traffic message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Traffic.verify|verify} messages.
                 * @param message Traffic message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.ITraffic, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Traffic message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Traffic
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Traffic;

                /**
                 * Decodes a Traffic message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Traffic
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Traffic;

                /**
                 * Verifies a Traffic message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Traffic message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Traffic
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Traffic;

                /**
                 * Creates a plain object from a Traffic message. Also converts values to other types if specified.
                 * @param message Traffic
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.Traffic, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Traffic to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Traffic {

                /** Properties of a Distribution. */
                interface IDistribution {

                    /** Distribution modelWeights */
                    modelWeights?: ({ [k: string]: number }|null);

                    /** Distribution typeWeights */
                    typeWeights?: ({ [k: string]: number }|null);

                    /** Distribution paintWeights */
                    paintWeights?: ({ [k: string]: number }|null);
                }

                /** Represents a Distribution. */
                class Distribution implements IDistribution {

                    /**
                     * Constructs a new Distribution.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.Traffic.IDistribution);

                    /** Distribution modelWeights. */
                    public modelWeights: { [k: string]: number };

                    /** Distribution typeWeights. */
                    public typeWeights: { [k: string]: number };

                    /** Distribution paintWeights. */
                    public paintWeights: { [k: string]: number };

                    /**
                     * Creates a new Distribution instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Distribution instance
                     */
                    public static create(properties?: metamoto.types.Scenario.Traffic.IDistribution): metamoto.types.Scenario.Traffic.Distribution;

                    /**
                     * Encodes the specified Distribution message. Does not implicitly {@link metamoto.types.Scenario.Traffic.Distribution.verify|verify} messages.
                     * @param message Distribution message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.Traffic.IDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Distribution message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Traffic.Distribution.verify|verify} messages.
                     * @param message Distribution message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.Traffic.IDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Distribution message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Distribution
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Traffic.Distribution;

                    /**
                     * Decodes a Distribution message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Distribution
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Traffic.Distribution;

                    /**
                     * Verifies a Distribution message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Distribution message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Distribution
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Traffic.Distribution;

                    /**
                     * Creates a plain object from a Distribution message. Also converts values to other types if specified.
                     * @param message Distribution
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.Traffic.Distribution, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Distribution to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }
            }

            /** Properties of a Pedestrians. */
            interface IPedestrians {

                /** Pedestrians region */
                region?: (metamoto.types.IVector3[]|null);

                /** Pedestrians distribution */
                distribution?: (metamoto.types.Scenario.Pedestrians.IDistribution|null);

                /** Pedestrians pedestrians */
                pedestrians?: (metamoto.types.IPedestrianConfiguration[]|null);

                /** Pedestrians numRandomPedestrians */
                numRandomPedestrians?: (number|null);

                /** Pedestrians pedestrianTraffic */
                pedestrianTraffic?: (number|null);
            }

            /** Represents a Pedestrians. */
            class Pedestrians implements IPedestrians {

                /**
                 * Constructs a new Pedestrians.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.IPedestrians);

                /** Pedestrians region. */
                public region: metamoto.types.IVector3[];

                /** Pedestrians distribution. */
                public distribution?: (metamoto.types.Scenario.Pedestrians.IDistribution|null);

                /** Pedestrians pedestrians. */
                public pedestrians: metamoto.types.IPedestrianConfiguration[];

                /** Pedestrians numRandomPedestrians. */
                public numRandomPedestrians: number;

                /** Pedestrians pedestrianTraffic. */
                public pedestrianTraffic: number;

                /** Pedestrians randomOneof. */
                public randomOneof?: ("numRandomPedestrians"|"pedestrianTraffic");

                /**
                 * Creates a new Pedestrians instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Pedestrians instance
                 */
                public static create(properties?: metamoto.types.Scenario.IPedestrians): metamoto.types.Scenario.Pedestrians;

                /**
                 * Encodes the specified Pedestrians message. Does not implicitly {@link metamoto.types.Scenario.Pedestrians.verify|verify} messages.
                 * @param message Pedestrians message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.IPedestrians, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Pedestrians message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Pedestrians.verify|verify} messages.
                 * @param message Pedestrians message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.IPedestrians, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Pedestrians message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Pedestrians
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Pedestrians;

                /**
                 * Decodes a Pedestrians message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Pedestrians
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Pedestrians;

                /**
                 * Verifies a Pedestrians message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Pedestrians message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Pedestrians
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Pedestrians;

                /**
                 * Creates a plain object from a Pedestrians message. Also converts values to other types if specified.
                 * @param message Pedestrians
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.Pedestrians, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Pedestrians to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Pedestrians {

                /** Properties of a Distribution. */
                interface IDistribution {

                    /** Distribution nameWeights */
                    nameWeights?: ({ [k: string]: number }|null);

                    /** Distribution typeWeights */
                    typeWeights?: ({ [k: string]: number }|null);

                    /** Distribution stateWeights */
                    stateWeights?: ({ [k: string]: number }|null);
                }

                /** Represents a Distribution. */
                class Distribution implements IDistribution {

                    /**
                     * Constructs a new Distribution.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.Pedestrians.IDistribution);

                    /** Distribution nameWeights. */
                    public nameWeights: { [k: string]: number };

                    /** Distribution typeWeights. */
                    public typeWeights: { [k: string]: number };

                    /** Distribution stateWeights. */
                    public stateWeights: { [k: string]: number };

                    /**
                     * Creates a new Distribution instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Distribution instance
                     */
                    public static create(properties?: metamoto.types.Scenario.Pedestrians.IDistribution): metamoto.types.Scenario.Pedestrians.Distribution;

                    /**
                     * Encodes the specified Distribution message. Does not implicitly {@link metamoto.types.Scenario.Pedestrians.Distribution.verify|verify} messages.
                     * @param message Distribution message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.Pedestrians.IDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Distribution message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Pedestrians.Distribution.verify|verify} messages.
                     * @param message Distribution message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.Pedestrians.IDistribution, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Distribution message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Distribution
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Pedestrians.Distribution;

                    /**
                     * Decodes a Distribution message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Distribution
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Pedestrians.Distribution;

                    /**
                     * Verifies a Distribution message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Distribution message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Distribution
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Pedestrians.Distribution;

                    /**
                     * Creates a plain object from a Distribution message. Also converts values to other types if specified.
                     * @param message Distribution
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.Pedestrians.Distribution, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Distribution to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }
            }

            /** Properties of a TrafficLight. */
            interface ITrafficLight {

                /** TrafficLight directions */
                directions?: (metamoto.types.Scenario.TrafficLight.IDirection[]|null);

                /** TrafficLight allRedTime */
                allRedTime?: (number|null);

                /** TrafficLight startGreenDirection */
                startGreenDirection?: (string|null);

                /** TrafficLight startCycleOffset */
                startCycleOffset?: (number|null);
            }

            /** Represents a TrafficLight. */
            class TrafficLight implements ITrafficLight {

                /**
                 * Constructs a new TrafficLight.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.ITrafficLight);

                /** TrafficLight directions. */
                public directions: metamoto.types.Scenario.TrafficLight.IDirection[];

                /** TrafficLight allRedTime. */
                public allRedTime: number;

                /** TrafficLight startGreenDirection. */
                public startGreenDirection: string;

                /** TrafficLight startCycleOffset. */
                public startCycleOffset: number;

                /**
                 * Creates a new TrafficLight instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns TrafficLight instance
                 */
                public static create(properties?: metamoto.types.Scenario.ITrafficLight): metamoto.types.Scenario.TrafficLight;

                /**
                 * Encodes the specified TrafficLight message. Does not implicitly {@link metamoto.types.Scenario.TrafficLight.verify|verify} messages.
                 * @param message TrafficLight message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.ITrafficLight, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified TrafficLight message, length delimited. Does not implicitly {@link metamoto.types.Scenario.TrafficLight.verify|verify} messages.
                 * @param message TrafficLight message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.ITrafficLight, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a TrafficLight message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns TrafficLight
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.TrafficLight;

                /**
                 * Decodes a TrafficLight message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns TrafficLight
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.TrafficLight;

                /**
                 * Verifies a TrafficLight message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a TrafficLight message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns TrafficLight
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.TrafficLight;

                /**
                 * Creates a plain object from a TrafficLight message. Also converts values to other types if specified.
                 * @param message TrafficLight
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.TrafficLight, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this TrafficLight to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace TrafficLight {

                /** Properties of a Direction. */
                interface IDirection {

                    /** Direction id */
                    id?: (string|null);

                    /** Direction greenTime */
                    greenTime?: (google.protobuf.IFloatValue|null);

                    /** Direction yellowTime */
                    yellowTime?: (google.protobuf.IFloatValue|null);

                    /** Direction crosswalkWalkTime */
                    crosswalkWalkTime?: (google.protobuf.IFloatValue|null);

                    /** Direction synchronizeWithDirectionId */
                    synchronizeWithDirectionId?: (string|null);
                }

                /** Represents a Direction. */
                class Direction implements IDirection {

                    /**
                     * Constructs a new Direction.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.TrafficLight.IDirection);

                    /** Direction id. */
                    public id: string;

                    /** Direction greenTime. */
                    public greenTime?: (google.protobuf.IFloatValue|null);

                    /** Direction yellowTime. */
                    public yellowTime?: (google.protobuf.IFloatValue|null);

                    /** Direction crosswalkWalkTime. */
                    public crosswalkWalkTime?: (google.protobuf.IFloatValue|null);

                    /** Direction synchronizeWithDirectionId. */
                    public synchronizeWithDirectionId: string;

                    /**
                     * Creates a new Direction instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Direction instance
                     */
                    public static create(properties?: metamoto.types.Scenario.TrafficLight.IDirection): metamoto.types.Scenario.TrafficLight.Direction;

                    /**
                     * Encodes the specified Direction message. Does not implicitly {@link metamoto.types.Scenario.TrafficLight.Direction.verify|verify} messages.
                     * @param message Direction message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.TrafficLight.IDirection, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Direction message, length delimited. Does not implicitly {@link metamoto.types.Scenario.TrafficLight.Direction.verify|verify} messages.
                     * @param message Direction message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.TrafficLight.IDirection, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Direction message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Direction
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.TrafficLight.Direction;

                    /**
                     * Decodes a Direction message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Direction
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.TrafficLight.Direction;

                    /**
                     * Verifies a Direction message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Direction message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Direction
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.TrafficLight.Direction;

                    /**
                     * Creates a plain object from a Direction message. Also converts values to other types if specified.
                     * @param message Direction
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.TrafficLight.Direction, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Direction to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }
            }

            /** Properties of an Intersection. */
            interface IIntersection {

                /** Intersection phases */
                phases?: (metamoto.types.Scenario.Intersection.IPhase[]|null);

                /** Intersection startingPhaseIndex */
                startingPhaseIndex?: (number|null);

                /** Intersection startingDurationOffset */
                startingDurationOffset?: (number|null);

                /** Intersection position */
                position?: (metamoto.types.IVector3|null);

                /** Intersection vectorId */
                vectorId?: (string|null);
            }

            /** Represents an Intersection. */
            class Intersection implements IIntersection {

                /**
                 * Constructs a new Intersection.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Scenario.IIntersection);

                /** Intersection phases. */
                public phases: metamoto.types.Scenario.Intersection.IPhase[];

                /** Intersection startingPhaseIndex. */
                public startingPhaseIndex: number;

                /** Intersection startingDurationOffset. */
                public startingDurationOffset: number;

                /** Intersection position. */
                public position?: (metamoto.types.IVector3|null);

                /** Intersection vectorId. */
                public vectorId: string;

                /**
                 * Creates a new Intersection instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Intersection instance
                 */
                public static create(properties?: metamoto.types.Scenario.IIntersection): metamoto.types.Scenario.Intersection;

                /**
                 * Encodes the specified Intersection message. Does not implicitly {@link metamoto.types.Scenario.Intersection.verify|verify} messages.
                 * @param message Intersection message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Scenario.IIntersection, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Intersection message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Intersection.verify|verify} messages.
                 * @param message Intersection message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Scenario.IIntersection, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes an Intersection message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Intersection
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Intersection;

                /**
                 * Decodes an Intersection message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Intersection
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Intersection;

                /**
                 * Verifies an Intersection message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates an Intersection message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Intersection
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Intersection;

                /**
                 * Creates a plain object from an Intersection message. Also converts values to other types if specified.
                 * @param message Intersection
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Scenario.Intersection, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Intersection to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Intersection {

                /** Properties of a SignalState. */
                interface ISignalState {

                    /** SignalState signalId */
                    signalId?: (string|null);

                    /** SignalState stateName */
                    stateName?: (string|null);
                }

                /** Represents a SignalState. */
                class SignalState implements ISignalState {

                    /**
                     * Constructs a new SignalState.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.Intersection.ISignalState);

                    /** SignalState signalId. */
                    public signalId: string;

                    /** SignalState stateName. */
                    public stateName: string;

                    /**
                     * Creates a new SignalState instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns SignalState instance
                     */
                    public static create(properties?: metamoto.types.Scenario.Intersection.ISignalState): metamoto.types.Scenario.Intersection.SignalState;

                    /**
                     * Encodes the specified SignalState message. Does not implicitly {@link metamoto.types.Scenario.Intersection.SignalState.verify|verify} messages.
                     * @param message SignalState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.Intersection.ISignalState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified SignalState message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Intersection.SignalState.verify|verify} messages.
                     * @param message SignalState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.Intersection.ISignalState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a SignalState message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns SignalState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Intersection.SignalState;

                    /**
                     * Decodes a SignalState message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns SignalState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Intersection.SignalState;

                    /**
                     * Verifies a SignalState message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a SignalState message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns SignalState
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Intersection.SignalState;

                    /**
                     * Creates a plain object from a SignalState message. Also converts values to other types if specified.
                     * @param message SignalState
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.Intersection.SignalState, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this SignalState to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of an IntersectionState. */
                interface IIntersectionState {

                    /** IntersectionState duration */
                    duration?: (number|null);

                    /** IntersectionState signalStates */
                    signalStates?: (metamoto.types.Scenario.Intersection.ISignalState[]|null);
                }

                /** Represents an IntersectionState. */
                class IntersectionState implements IIntersectionState {

                    /**
                     * Constructs a new IntersectionState.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.Intersection.IIntersectionState);

                    /** IntersectionState duration. */
                    public duration: number;

                    /** IntersectionState signalStates. */
                    public signalStates: metamoto.types.Scenario.Intersection.ISignalState[];

                    /**
                     * Creates a new IntersectionState instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns IntersectionState instance
                     */
                    public static create(properties?: metamoto.types.Scenario.Intersection.IIntersectionState): metamoto.types.Scenario.Intersection.IntersectionState;

                    /**
                     * Encodes the specified IntersectionState message. Does not implicitly {@link metamoto.types.Scenario.Intersection.IntersectionState.verify|verify} messages.
                     * @param message IntersectionState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.Intersection.IIntersectionState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified IntersectionState message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Intersection.IntersectionState.verify|verify} messages.
                     * @param message IntersectionState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.Intersection.IIntersectionState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes an IntersectionState message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns IntersectionState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Intersection.IntersectionState;

                    /**
                     * Decodes an IntersectionState message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns IntersectionState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Intersection.IntersectionState;

                    /**
                     * Verifies an IntersectionState message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates an IntersectionState message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns IntersectionState
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Intersection.IntersectionState;

                    /**
                     * Creates a plain object from an IntersectionState message. Also converts values to other types if specified.
                     * @param message IntersectionState
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.Intersection.IntersectionState, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this IntersectionState to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a Phase. */
                interface IPhase {

                    /** Phase intersectionStates */
                    intersectionStates?: (metamoto.types.Scenario.Intersection.IIntersectionState[]|null);
                }

                /** Represents a Phase. */
                class Phase implements IPhase {

                    /**
                     * Constructs a new Phase.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.Scenario.Intersection.IPhase);

                    /** Phase intersectionStates. */
                    public intersectionStates: metamoto.types.Scenario.Intersection.IIntersectionState[];

                    /**
                     * Creates a new Phase instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Phase instance
                     */
                    public static create(properties?: metamoto.types.Scenario.Intersection.IPhase): metamoto.types.Scenario.Intersection.Phase;

                    /**
                     * Encodes the specified Phase message. Does not implicitly {@link metamoto.types.Scenario.Intersection.Phase.verify|verify} messages.
                     * @param message Phase message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.Scenario.Intersection.IPhase, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Phase message, length delimited. Does not implicitly {@link metamoto.types.Scenario.Intersection.Phase.verify|verify} messages.
                     * @param message Phase message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.Scenario.Intersection.IPhase, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Phase message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Phase
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scenario.Intersection.Phase;

                    /**
                     * Decodes a Phase message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Phase
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scenario.Intersection.Phase;

                    /**
                     * Verifies a Phase message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Phase message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Phase
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.Scenario.Intersection.Phase;

                    /**
                     * Creates a plain object from a Phase message. Also converts values to other types if specified.
                     * @param message Phase
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.Scenario.Intersection.Phase, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Phase to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }
            }
        }

        /** Properties of an Infraction. */
        interface IInfraction {

            /** Infraction type */
            type?: (metamoto.types.Infraction.Type|null);

            /** Infraction failValue */
            failValue?: (google.protobuf.IFloatValue|null);

            /** Infraction stopValue */
            stopValue?: (google.protobuf.IFloatValue|null);

            /** Infraction otherValues */
            otherValues?: (google.protobuf.IFloatValue[]|null);
        }

        /** Represents an Infraction. */
        class Infraction implements IInfraction {

            /**
             * Constructs a new Infraction.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IInfraction);

            /** Infraction type. */
            public type: metamoto.types.Infraction.Type;

            /** Infraction failValue. */
            public failValue?: (google.protobuf.IFloatValue|null);

            /** Infraction stopValue. */
            public stopValue?: (google.protobuf.IFloatValue|null);

            /** Infraction otherValues. */
            public otherValues: google.protobuf.IFloatValue[];

            /**
             * Creates a new Infraction instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Infraction instance
             */
            public static create(properties?: metamoto.types.IInfraction): metamoto.types.Infraction;

            /**
             * Encodes the specified Infraction message. Does not implicitly {@link metamoto.types.Infraction.verify|verify} messages.
             * @param message Infraction message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IInfraction, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Infraction message, length delimited. Does not implicitly {@link metamoto.types.Infraction.verify|verify} messages.
             * @param message Infraction message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IInfraction, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Infraction message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Infraction
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Infraction;

            /**
             * Decodes an Infraction message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Infraction
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Infraction;

            /**
             * Verifies an Infraction message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Infraction message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Infraction
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Infraction;

            /**
             * Creates a plain object from an Infraction message. Also converts values to other types if specified.
             * @param message Infraction
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Infraction, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Infraction to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Infraction {

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                VEHICLE_COLLISION = 2,
                PEDESTRIAN_COLLISION = 3,
                ENVIRONMENT_COLLISION = 4,
                OBSTACLE_COLLISION = 5,
                TRAFFIC_LIGHT = 6,
                STOP_SIGN = 7,
                SPEED_LIMIT = 8,
                HARD_BRAKE = 9,
                WRONG_WAY = 10,
                OFF_ROAD = 11,
                EXTERNAL_WARNING = 12,
                EXTERNAL_FAILURE = 13,
                EXTERNAL_PASS = 14,
                EXTERNAL_STOP = 15
            }
        }

        /** Properties of a DriverModel. */
        interface IDriverModel {

            /** DriverModel collisionAvoidance */
            collisionAvoidance?: (number|null);

            /** DriverModel speedCoefficient */
            speedCoefficient?: (number|null);

            /** DriverModel obeysLights */
            obeysLights?: (boolean|null);

            /** DriverModel randomPath */
            randomPath?: (boolean|null);

            /** DriverModel laneChangeOptimization */
            laneChangeOptimization?: (number|null);

            /** DriverModel laneCenterDeviation */
            laneCenterDeviation?: (number|null);

            /** DriverModel timegapMultiplier */
            timegapMultiplier?: (number|null);

            /** DriverModel brakingBehavior */
            brakingBehavior?: (metamoto.types.DriverModel.IBrakingBehavior|null);
        }

        /** Represents a DriverModel. */
        class DriverModel implements IDriverModel {

            /**
             * Constructs a new DriverModel.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IDriverModel);

            /** DriverModel collisionAvoidance. */
            public collisionAvoidance: number;

            /** DriverModel speedCoefficient. */
            public speedCoefficient: number;

            /** DriverModel obeysLights. */
            public obeysLights: boolean;

            /** DriverModel randomPath. */
            public randomPath: boolean;

            /** DriverModel laneChangeOptimization. */
            public laneChangeOptimization: number;

            /** DriverModel laneCenterDeviation. */
            public laneCenterDeviation: number;

            /** DriverModel timegapMultiplier. */
            public timegapMultiplier: number;

            /** DriverModel brakingBehavior. */
            public brakingBehavior?: (metamoto.types.DriverModel.IBrakingBehavior|null);

            /**
             * Creates a new DriverModel instance using the specified properties.
             * @param [properties] Properties to set
             * @returns DriverModel instance
             */
            public static create(properties?: metamoto.types.IDriverModel): metamoto.types.DriverModel;

            /**
             * Encodes the specified DriverModel message. Does not implicitly {@link metamoto.types.DriverModel.verify|verify} messages.
             * @param message DriverModel message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IDriverModel, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified DriverModel message, length delimited. Does not implicitly {@link metamoto.types.DriverModel.verify|verify} messages.
             * @param message DriverModel message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IDriverModel, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a DriverModel message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns DriverModel
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.DriverModel;

            /**
             * Decodes a DriverModel message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns DriverModel
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.DriverModel;

            /**
             * Verifies a DriverModel message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a DriverModel message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns DriverModel
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.DriverModel;

            /**
             * Creates a plain object from a DriverModel message. Also converts values to other types if specified.
             * @param message DriverModel
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.DriverModel, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this DriverModel to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace DriverModel {

            /** Properties of a BrakingBehavior. */
            interface IBrakingBehavior {

                /** BrakingBehavior coastDecelerationThreshold */
                coastDecelerationThreshold?: (number|null);

                /** BrakingBehavior coastSpeedThreshold */
                coastSpeedThreshold?: (number|null);

                /** BrakingBehavior minBrake */
                minBrake?: (number|null);
            }

            /** Represents a BrakingBehavior. */
            class BrakingBehavior implements IBrakingBehavior {

                /**
                 * Constructs a new BrakingBehavior.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.DriverModel.IBrakingBehavior);

                /** BrakingBehavior coastDecelerationThreshold. */
                public coastDecelerationThreshold: number;

                /** BrakingBehavior coastSpeedThreshold. */
                public coastSpeedThreshold: number;

                /** BrakingBehavior minBrake. */
                public minBrake: number;

                /**
                 * Creates a new BrakingBehavior instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns BrakingBehavior instance
                 */
                public static create(properties?: metamoto.types.DriverModel.IBrakingBehavior): metamoto.types.DriverModel.BrakingBehavior;

                /**
                 * Encodes the specified BrakingBehavior message. Does not implicitly {@link metamoto.types.DriverModel.BrakingBehavior.verify|verify} messages.
                 * @param message BrakingBehavior message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.DriverModel.IBrakingBehavior, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified BrakingBehavior message, length delimited. Does not implicitly {@link metamoto.types.DriverModel.BrakingBehavior.verify|verify} messages.
                 * @param message BrakingBehavior message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.DriverModel.IBrakingBehavior, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a BrakingBehavior message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns BrakingBehavior
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.DriverModel.BrakingBehavior;

                /**
                 * Decodes a BrakingBehavior message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns BrakingBehavior
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.DriverModel.BrakingBehavior;

                /**
                 * Verifies a BrakingBehavior message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a BrakingBehavior message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns BrakingBehavior
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.DriverModel.BrakingBehavior;

                /**
                 * Creates a plain object from a BrakingBehavior message. Also converts values to other types if specified.
                 * @param message BrakingBehavior
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.DriverModel.BrakingBehavior, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this BrakingBehavior to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a TrafficFlow. */
        interface ITrafficFlow {

            /** TrafficFlow id */
            id?: (number|null);

            /** TrafficFlow source */
            source?: (metamoto.types.TrafficFlow.ILaneSpan|null);

            /** TrafficFlow sinks */
            sinks?: (metamoto.types.TrafficFlow.ILaneSpan[]|null);

            /** TrafficFlow generationRate */
            generationRate?: (metamoto.types.INormalDistribution|null);

            /** TrafficFlow speed */
            speed?: (number|null);

            /** TrafficFlow populate */
            populate?: (boolean|null);
        }

        /** Represents a TrafficFlow. */
        class TrafficFlow implements ITrafficFlow {

            /**
             * Constructs a new TrafficFlow.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITrafficFlow);

            /** TrafficFlow id. */
            public id: number;

            /** TrafficFlow source. */
            public source?: (metamoto.types.TrafficFlow.ILaneSpan|null);

            /** TrafficFlow sinks. */
            public sinks: metamoto.types.TrafficFlow.ILaneSpan[];

            /** TrafficFlow generationRate. */
            public generationRate?: (metamoto.types.INormalDistribution|null);

            /** TrafficFlow speed. */
            public speed: number;

            /** TrafficFlow populate. */
            public populate: boolean;

            /**
             * Creates a new TrafficFlow instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TrafficFlow instance
             */
            public static create(properties?: metamoto.types.ITrafficFlow): metamoto.types.TrafficFlow;

            /**
             * Encodes the specified TrafficFlow message. Does not implicitly {@link metamoto.types.TrafficFlow.verify|verify} messages.
             * @param message TrafficFlow message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITrafficFlow, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TrafficFlow message, length delimited. Does not implicitly {@link metamoto.types.TrafficFlow.verify|verify} messages.
             * @param message TrafficFlow message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITrafficFlow, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TrafficFlow message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TrafficFlow
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TrafficFlow;

            /**
             * Decodes a TrafficFlow message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TrafficFlow
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TrafficFlow;

            /**
             * Verifies a TrafficFlow message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TrafficFlow message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TrafficFlow
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TrafficFlow;

            /**
             * Creates a plain object from a TrafficFlow message. Also converts values to other types if specified.
             * @param message TrafficFlow
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TrafficFlow, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TrafficFlow to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TrafficFlow {

            /** Properties of a LaneSpan. */
            interface ILaneSpan {

                /** LaneSpan roadId */
                roadId?: (string|null);

                /** LaneSpan s */
                s?: (number|null);

                /** LaneSpan lanes */
                lanes?: (number[]|null);

                /** LaneSpan positions */
                positions?: (metamoto.types.IVector3[]|null);
            }

            /** Represents a LaneSpan. */
            class LaneSpan implements ILaneSpan {

                /**
                 * Constructs a new LaneSpan.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TrafficFlow.ILaneSpan);

                /** LaneSpan roadId. */
                public roadId: string;

                /** LaneSpan s. */
                public s: number;

                /** LaneSpan lanes. */
                public lanes: number[];

                /** LaneSpan positions. */
                public positions: metamoto.types.IVector3[];

                /**
                 * Creates a new LaneSpan instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns LaneSpan instance
                 */
                public static create(properties?: metamoto.types.TrafficFlow.ILaneSpan): metamoto.types.TrafficFlow.LaneSpan;

                /**
                 * Encodes the specified LaneSpan message. Does not implicitly {@link metamoto.types.TrafficFlow.LaneSpan.verify|verify} messages.
                 * @param message LaneSpan message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TrafficFlow.ILaneSpan, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified LaneSpan message, length delimited. Does not implicitly {@link metamoto.types.TrafficFlow.LaneSpan.verify|verify} messages.
                 * @param message LaneSpan message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TrafficFlow.ILaneSpan, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a LaneSpan message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns LaneSpan
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TrafficFlow.LaneSpan;

                /**
                 * Decodes a LaneSpan message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns LaneSpan
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TrafficFlow.LaneSpan;

                /**
                 * Verifies a LaneSpan message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a LaneSpan message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns LaneSpan
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TrafficFlow.LaneSpan;

                /**
                 * Creates a plain object from a LaneSpan message. Also converts values to other types if specified.
                 * @param message LaneSpan
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TrafficFlow.LaneSpan, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this LaneSpan to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a TrafficVehicle. */
        interface ITrafficVehicle {

            /** TrafficVehicle displayName */
            displayName?: (string|null);

            /** TrafficVehicle instance */
            instance?: (metamoto.types.IVehicleInstance|null);

            /** TrafficVehicle path */
            path?: (metamoto.types.IWaypoint[]|null);

            /** TrafficVehicle driverModel */
            driverModel?: (metamoto.types.IDriverModel|null);

            /** TrafficVehicle flowId */
            flowId?: (number|null);
        }

        /** Represents a TrafficVehicle. */
        class TrafficVehicle implements ITrafficVehicle {

            /**
             * Constructs a new TrafficVehicle.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITrafficVehicle);

            /** TrafficVehicle displayName. */
            public displayName: string;

            /** TrafficVehicle instance. */
            public instance?: (metamoto.types.IVehicleInstance|null);

            /** TrafficVehicle path. */
            public path: metamoto.types.IWaypoint[];

            /** TrafficVehicle driverModel. */
            public driverModel?: (metamoto.types.IDriverModel|null);

            /** TrafficVehicle flowId. */
            public flowId: number;

            /**
             * Creates a new TrafficVehicle instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TrafficVehicle instance
             */
            public static create(properties?: metamoto.types.ITrafficVehicle): metamoto.types.TrafficVehicle;

            /**
             * Encodes the specified TrafficVehicle message. Does not implicitly {@link metamoto.types.TrafficVehicle.verify|verify} messages.
             * @param message TrafficVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITrafficVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TrafficVehicle message, length delimited. Does not implicitly {@link metamoto.types.TrafficVehicle.verify|verify} messages.
             * @param message TrafficVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITrafficVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TrafficVehicle message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TrafficVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TrafficVehicle;

            /**
             * Decodes a TrafficVehicle message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TrafficVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TrafficVehicle;

            /**
             * Verifies a TrafficVehicle message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TrafficVehicle message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TrafficVehicle
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TrafficVehicle;

            /**
             * Creates a plain object from a TrafficVehicle message. Also converts values to other types if specified.
             * @param message TrafficVehicle
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TrafficVehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TrafficVehicle to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a ParkedVehicle. */
        interface IParkedVehicle {

            /** ParkedVehicle displayName */
            displayName?: (string|null);

            /** ParkedVehicle instance */
            instance?: (metamoto.types.IVehicleInstance|null);

            /** ParkedVehicle worldPoint */
            worldPoint?: (metamoto.types.IPose|null);

            /** ParkedVehicle roadPoint */
            roadPoint?: (metamoto.types.IRoadPoint|null);
        }

        /** Represents a ParkedVehicle. */
        class ParkedVehicle implements IParkedVehicle {

            /**
             * Constructs a new ParkedVehicle.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IParkedVehicle);

            /** ParkedVehicle displayName. */
            public displayName: string;

            /** ParkedVehicle instance. */
            public instance?: (metamoto.types.IVehicleInstance|null);

            /** ParkedVehicle worldPoint. */
            public worldPoint?: (metamoto.types.IPose|null);

            /** ParkedVehicle roadPoint. */
            public roadPoint?: (metamoto.types.IRoadPoint|null);

            /** ParkedVehicle pointOneof. */
            public pointOneof?: ("worldPoint"|"roadPoint");

            /**
             * Creates a new ParkedVehicle instance using the specified properties.
             * @param [properties] Properties to set
             * @returns ParkedVehicle instance
             */
            public static create(properties?: metamoto.types.IParkedVehicle): metamoto.types.ParkedVehicle;

            /**
             * Encodes the specified ParkedVehicle message. Does not implicitly {@link metamoto.types.ParkedVehicle.verify|verify} messages.
             * @param message ParkedVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IParkedVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified ParkedVehicle message, length delimited. Does not implicitly {@link metamoto.types.ParkedVehicle.verify|verify} messages.
             * @param message ParkedVehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IParkedVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a ParkedVehicle message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns ParkedVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.ParkedVehicle;

            /**
             * Decodes a ParkedVehicle message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns ParkedVehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.ParkedVehicle;

            /**
             * Verifies a ParkedVehicle message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a ParkedVehicle message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns ParkedVehicle
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.ParkedVehicle;

            /**
             * Creates a plain object from a ParkedVehicle message. Also converts values to other types if specified.
             * @param message ParkedVehicle
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.ParkedVehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this ParkedVehicle to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a PedestrianConfiguration. */
        interface IPedestrianConfiguration {

            /** PedestrianConfiguration displayName */
            displayName?: (string|null);

            /** PedestrianConfiguration name */
            name?: (string|null);

            /** PedestrianConfiguration type */
            type?: (metamoto.types.Pedestrian.Type|null);

            /** PedestrianConfiguration path */
            path?: (metamoto.types.PedestrianConfiguration.IPathPoint[]|null);

            /** PedestrianConfiguration randomPath */
            randomPath?: (boolean|null);
        }

        /** Represents a PedestrianConfiguration. */
        class PedestrianConfiguration implements IPedestrianConfiguration {

            /**
             * Constructs a new PedestrianConfiguration.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IPedestrianConfiguration);

            /** PedestrianConfiguration displayName. */
            public displayName: string;

            /** PedestrianConfiguration name. */
            public name: string;

            /** PedestrianConfiguration type. */
            public type: metamoto.types.Pedestrian.Type;

            /** PedestrianConfiguration path. */
            public path: metamoto.types.PedestrianConfiguration.IPathPoint[];

            /** PedestrianConfiguration randomPath. */
            public randomPath: boolean;

            /** PedestrianConfiguration instanceOneof. */
            public instanceOneof?: ("name"|"type");

            /**
             * Creates a new PedestrianConfiguration instance using the specified properties.
             * @param [properties] Properties to set
             * @returns PedestrianConfiguration instance
             */
            public static create(properties?: metamoto.types.IPedestrianConfiguration): metamoto.types.PedestrianConfiguration;

            /**
             * Encodes the specified PedestrianConfiguration message. Does not implicitly {@link metamoto.types.PedestrianConfiguration.verify|verify} messages.
             * @param message PedestrianConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IPedestrianConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified PedestrianConfiguration message, length delimited. Does not implicitly {@link metamoto.types.PedestrianConfiguration.verify|verify} messages.
             * @param message PedestrianConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IPedestrianConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a PedestrianConfiguration message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns PedestrianConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PedestrianConfiguration;

            /**
             * Decodes a PedestrianConfiguration message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns PedestrianConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PedestrianConfiguration;

            /**
             * Verifies a PedestrianConfiguration message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a PedestrianConfiguration message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns PedestrianConfiguration
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.PedestrianConfiguration;

            /**
             * Creates a plain object from a PedestrianConfiguration message. Also converts values to other types if specified.
             * @param message PedestrianConfiguration
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.PedestrianConfiguration, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this PedestrianConfiguration to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace PedestrianConfiguration {

            /** State enum. */
            enum State {
                STATE_UNKNOWN = 0,
                STATE_OTHER = 1,
                IDLE = 2,
                WALK = 3,
                RUN = 4,
                RUN_IN_PLACE = 5
            }

            /** PathingBehaviour enum. */
            enum PathingBehaviour {
                STANDARD = 0,
                UNCONSTRAINED = 1
            }

            /** Properties of a PathPoint. */
            interface IPathPoint {

                /** PathPoint state */
                state?: (metamoto.types.PedestrianConfiguration.State|null);

                /** PathPoint stateVariant */
                stateVariant?: (number|null);

                /** PathPoint targetPoint */
                targetPoint?: (metamoto.types.IVector3|null);

                /** PathPoint waitTime */
                waitTime?: (number|null);

                /** PathPoint pathingBehaviour */
                pathingBehaviour?: (metamoto.types.PedestrianConfiguration.PathingBehaviour|null);
            }

            /** Represents a PathPoint. */
            class PathPoint implements IPathPoint {

                /**
                 * Constructs a new PathPoint.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.PedestrianConfiguration.IPathPoint);

                /** PathPoint state. */
                public state: metamoto.types.PedestrianConfiguration.State;

                /** PathPoint stateVariant. */
                public stateVariant: number;

                /** PathPoint targetPoint. */
                public targetPoint?: (metamoto.types.IVector3|null);

                /** PathPoint waitTime. */
                public waitTime: number;

                /** PathPoint pathingBehaviour. */
                public pathingBehaviour: metamoto.types.PedestrianConfiguration.PathingBehaviour;

                /**
                 * Creates a new PathPoint instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns PathPoint instance
                 */
                public static create(properties?: metamoto.types.PedestrianConfiguration.IPathPoint): metamoto.types.PedestrianConfiguration.PathPoint;

                /**
                 * Encodes the specified PathPoint message. Does not implicitly {@link metamoto.types.PedestrianConfiguration.PathPoint.verify|verify} messages.
                 * @param message PathPoint message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.PedestrianConfiguration.IPathPoint, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified PathPoint message, length delimited. Does not implicitly {@link metamoto.types.PedestrianConfiguration.PathPoint.verify|verify} messages.
                 * @param message PathPoint message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.PedestrianConfiguration.IPathPoint, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a PathPoint message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns PathPoint
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.PedestrianConfiguration.PathPoint;

                /**
                 * Decodes a PathPoint message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns PathPoint
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.PedestrianConfiguration.PathPoint;

                /**
                 * Verifies a PathPoint message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a PathPoint message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns PathPoint
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.PedestrianConfiguration.PathPoint;

                /**
                 * Creates a plain object from a PathPoint message. Also converts values to other types if specified.
                 * @param message PathPoint
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.PedestrianConfiguration.PathPoint, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this PathPoint to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of an Event. */
        interface IEvent {

            /** Event objectType */
            objectType?: (metamoto.types.Event.ObjectType|null);

            /** Event action */
            action?: (metamoto.types.Event.Action|null);

            /** Event time */
            time?: (number|null);

            /** Event trigger */
            trigger?: (metamoto.types.Event.IProximityTrigger|null);

            /** Event id */
            id?: (string|null);

            /** Event secondaryId */
            secondaryId?: (string|null);

            /** Event payloadString */
            payloadString?: (string[]|null);

            /** Event payloadFloat */
            payloadFloat?: (number[]|null);

            /** Event waypoints */
            waypoints?: (metamoto.types.IWaypoint[]|null);
        }

        /** Represents an Event. */
        class Event implements IEvent {

            /**
             * Constructs a new Event.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IEvent);

            /** Event objectType. */
            public objectType: metamoto.types.Event.ObjectType;

            /** Event action. */
            public action: metamoto.types.Event.Action;

            /** Event time. */
            public time: number;

            /** Event trigger. */
            public trigger?: (metamoto.types.Event.IProximityTrigger|null);

            /** Event id. */
            public id: string;

            /** Event secondaryId. */
            public secondaryId: string;

            /** Event payloadString. */
            public payloadString: string[];

            /** Event payloadFloat. */
            public payloadFloat: number[];

            /** Event waypoints. */
            public waypoints: metamoto.types.IWaypoint[];

            /**
             * Creates a new Event instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Event instance
             */
            public static create(properties?: metamoto.types.IEvent): metamoto.types.Event;

            /**
             * Encodes the specified Event message. Does not implicitly {@link metamoto.types.Event.verify|verify} messages.
             * @param message Event message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IEvent, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Event message, length delimited. Does not implicitly {@link metamoto.types.Event.verify|verify} messages.
             * @param message Event message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IEvent, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Event message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Event
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Event;

            /**
             * Decodes an Event message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Event
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Event;

            /**
             * Verifies an Event message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Event message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Event
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Event;

            /**
             * Creates a plain object from an Event message. Also converts values to other types if specified.
             * @param message Event
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Event, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Event to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Event {

            /** ObjectType enum. */
            enum ObjectType {
                OBJECT_OTHER = 0,
                SENSOR = 1,
                CONTROLLER = 2,
                EGO_VEHICLE = 3,
                TRAFFIC_VEHICLE = 4,
                TRAFFIC_FLOW = 5,
                PEDESTRIAN = 6,
                TRAFFIC_LIGHT = 7,
                ENVIRONMENT = 8
            }

            /** Action enum. */
            enum Action {
                ACTION_OTHER = 0,
                ACTIVATE = 1,
                DEACTIVATE = 2,
                CREATE = 3,
                REMOVE = 4,
                MODIFY = 5,
                SEND = 6
            }

            /** Properties of a ProximityTrigger. */
            interface IProximityTrigger {

                /** ProximityTrigger location */
                location?: (metamoto.types.IVector3|null);

                /** ProximityTrigger radius */
                radius?: (number|null);

                /** ProximityTrigger egoVehicleIndex */
                egoVehicleIndex?: (number|null);
            }

            /** Represents a ProximityTrigger. */
            class ProximityTrigger implements IProximityTrigger {

                /**
                 * Constructs a new ProximityTrigger.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.Event.IProximityTrigger);

                /** ProximityTrigger location. */
                public location?: (metamoto.types.IVector3|null);

                /** ProximityTrigger radius. */
                public radius: number;

                /** ProximityTrigger egoVehicleIndex. */
                public egoVehicleIndex: number;

                /**
                 * Creates a new ProximityTrigger instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns ProximityTrigger instance
                 */
                public static create(properties?: metamoto.types.Event.IProximityTrigger): metamoto.types.Event.ProximityTrigger;

                /**
                 * Encodes the specified ProximityTrigger message. Does not implicitly {@link metamoto.types.Event.ProximityTrigger.verify|verify} messages.
                 * @param message ProximityTrigger message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.Event.IProximityTrigger, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified ProximityTrigger message, length delimited. Does not implicitly {@link metamoto.types.Event.ProximityTrigger.verify|verify} messages.
                 * @param message ProximityTrigger message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.Event.IProximityTrigger, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a ProximityTrigger message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns ProximityTrigger
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Event.ProximityTrigger;

                /**
                 * Decodes a ProximityTrigger message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns ProximityTrigger
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Event.ProximityTrigger;

                /**
                 * Verifies a ProximityTrigger message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a ProximityTrigger message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns ProximityTrigger
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.Event.ProximityTrigger;

                /**
                 * Creates a plain object from a ProximityTrigger message. Also converts values to other types if specified.
                 * @param message ProximityTrigger
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.Event.ProximityTrigger, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this ProximityTrigger to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a SceneImport. */
        interface ISceneImport {

            /** SceneImport id */
            id?: (number|null);

            /** SceneImport status */
            status?: (metamoto.types.SceneImport.Status|null);

            /** SceneImport statusMessage */
            statusMessage?: (string|null);

            /** SceneImport startTime */
            startTime?: (string|null);

            /** SceneImport endTime */
            endTime?: (string|null);

            /** SceneImport startedBy */
            startedBy?: (string|null);

            /** SceneImport progress */
            progress?: (number|null);
        }

        /** Represents a SceneImport. */
        class SceneImport implements ISceneImport {

            /**
             * Constructs a new SceneImport.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISceneImport);

            /** SceneImport id. */
            public id: number;

            /** SceneImport status. */
            public status: metamoto.types.SceneImport.Status;

            /** SceneImport statusMessage. */
            public statusMessage: string;

            /** SceneImport startTime. */
            public startTime: string;

            /** SceneImport endTime. */
            public endTime: string;

            /** SceneImport startedBy. */
            public startedBy: string;

            /** SceneImport progress. */
            public progress: number;

            /**
             * Creates a new SceneImport instance using the specified properties.
             * @param [properties] Properties to set
             * @returns SceneImport instance
             */
            public static create(properties?: metamoto.types.ISceneImport): metamoto.types.SceneImport;

            /**
             * Encodes the specified SceneImport message. Does not implicitly {@link metamoto.types.SceneImport.verify|verify} messages.
             * @param message SceneImport message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISceneImport, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified SceneImport message, length delimited. Does not implicitly {@link metamoto.types.SceneImport.verify|verify} messages.
             * @param message SceneImport message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISceneImport, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a SceneImport message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns SceneImport
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SceneImport;

            /**
             * Decodes a SceneImport message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns SceneImport
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SceneImport;

            /**
             * Verifies a SceneImport message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a SceneImport message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns SceneImport
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.SceneImport;

            /**
             * Creates a plain object from a SceneImport message. Also converts values to other types if specified.
             * @param message SceneImport
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.SceneImport, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this SceneImport to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace SceneImport {

            /** Status enum. */
            enum Status {
                UNKNOWN = 0,
                QUEUED = 1,
                BUILDING = 2,
                SUCCEEDED = 3,
                FAILED = 4,
                CANCELLED = 5
            }
        }

        /** Properties of a Scene. */
        interface IScene {

            /** Scene id */
            id?: (string|null);

            /** Scene name */
            name?: (string|null);

            /** Scene displayName */
            displayName?: (string|null);

            /** Scene description */
            description?: (string|null);

            /** Scene ready */
            ready?: (boolean|null);

            /** Scene imports */
            imports?: (metamoto.types.ISceneImport[]|null);
        }

        /** Represents a Scene. */
        class Scene implements IScene {

            /**
             * Constructs a new Scene.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IScene);

            /** Scene id. */
            public id: string;

            /** Scene name. */
            public name: string;

            /** Scene displayName. */
            public displayName: string;

            /** Scene description. */
            public description: string;

            /** Scene ready. */
            public ready: boolean;

            /** Scene imports. */
            public imports: metamoto.types.ISceneImport[];

            /**
             * Creates a new Scene instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Scene instance
             */
            public static create(properties?: metamoto.types.IScene): metamoto.types.Scene;

            /**
             * Encodes the specified Scene message. Does not implicitly {@link metamoto.types.Scene.verify|verify} messages.
             * @param message Scene message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IScene, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Scene message, length delimited. Does not implicitly {@link metamoto.types.Scene.verify|verify} messages.
             * @param message Scene message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IScene, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Scene message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Scene
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Scene;

            /**
             * Decodes a Scene message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Scene
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Scene;

            /**
             * Verifies a Scene message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Scene message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Scene
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Scene;

            /**
             * Creates a plain object from a Scene message. Also converts values to other types if specified.
             * @param message Scene
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Scene, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Scene to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a ServiceDescription. */
        interface IServiceDescription {

            /** ServiceDescription name */
            name?: (string|null);

            /** ServiceDescription uri */
            uri?: (string|null);
        }

        /** Represents a ServiceDescription. */
        class ServiceDescription implements IServiceDescription {

            /**
             * Constructs a new ServiceDescription.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IServiceDescription);

            /** ServiceDescription name. */
            public name: string;

            /** ServiceDescription uri. */
            public uri: string;

            /**
             * Creates a new ServiceDescription instance using the specified properties.
             * @param [properties] Properties to set
             * @returns ServiceDescription instance
             */
            public static create(properties?: metamoto.types.IServiceDescription): metamoto.types.ServiceDescription;

            /**
             * Encodes the specified ServiceDescription message. Does not implicitly {@link metamoto.types.ServiceDescription.verify|verify} messages.
             * @param message ServiceDescription message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IServiceDescription, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified ServiceDescription message, length delimited. Does not implicitly {@link metamoto.types.ServiceDescription.verify|verify} messages.
             * @param message ServiceDescription message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IServiceDescription, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a ServiceDescription message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns ServiceDescription
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.ServiceDescription;

            /**
             * Decodes a ServiceDescription message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns ServiceDescription
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.ServiceDescription;

            /**
             * Verifies a ServiceDescription message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a ServiceDescription message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns ServiceDescription
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.ServiceDescription;

            /**
             * Creates a plain object from a ServiceDescription message. Also converts values to other types if specified.
             * @param message ServiceDescription
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.ServiceDescription, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this ServiceDescription to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Shape. */
        interface IShape {

            /** Shape type */
            type?: (metamoto.types.Shape.Type|null);

            /** Shape dimensions */
            dimensions?: (number[]|null);
        }

        /** Represents a Shape. */
        class Shape implements IShape {

            /**
             * Constructs a new Shape.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IShape);

            /** Shape type. */
            public type: metamoto.types.Shape.Type;

            /** Shape dimensions. */
            public dimensions: number[];

            /**
             * Creates a new Shape instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Shape instance
             */
            public static create(properties?: metamoto.types.IShape): metamoto.types.Shape;

            /**
             * Encodes the specified Shape message. Does not implicitly {@link metamoto.types.Shape.verify|verify} messages.
             * @param message Shape message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IShape, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Shape message, length delimited. Does not implicitly {@link metamoto.types.Shape.verify|verify} messages.
             * @param message Shape message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IShape, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Shape message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Shape
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Shape;

            /**
             * Decodes a Shape message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Shape
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Shape;

            /**
             * Verifies a Shape message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Shape message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Shape
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Shape;

            /**
             * Creates a plain object from a Shape message. Also converts values to other types if specified.
             * @param message Shape
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Shape, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Shape to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Shape {

            /** Type enum. */
            enum Type {
                BOX = 0,
                SPHERE = 1,
                CYLINDER = 2,
                CONE = 3
            }
        }

        /** Properties of a SignalConfiguration. */
        interface ISignalConfiguration {

            /** SignalConfiguration signals */
            signals?: ({ [k: string]: metamoto.types.SignalConfiguration.ISignal }|null);
        }

        /** Represents a SignalConfiguration. */
        class SignalConfiguration implements ISignalConfiguration {

            /**
             * Constructs a new SignalConfiguration.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ISignalConfiguration);

            /** SignalConfiguration signals. */
            public signals: { [k: string]: metamoto.types.SignalConfiguration.ISignal };

            /**
             * Creates a new SignalConfiguration instance using the specified properties.
             * @param [properties] Properties to set
             * @returns SignalConfiguration instance
             */
            public static create(properties?: metamoto.types.ISignalConfiguration): metamoto.types.SignalConfiguration;

            /**
             * Encodes the specified SignalConfiguration message. Does not implicitly {@link metamoto.types.SignalConfiguration.verify|verify} messages.
             * @param message SignalConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ISignalConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified SignalConfiguration message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.verify|verify} messages.
             * @param message SignalConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ISignalConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a SignalConfiguration message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns SignalConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration;

            /**
             * Decodes a SignalConfiguration message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns SignalConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration;

            /**
             * Verifies a SignalConfiguration message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a SignalConfiguration message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns SignalConfiguration
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration;

            /**
             * Creates a plain object from a SignalConfiguration message. Also converts values to other types if specified.
             * @param message SignalConfiguration
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.SignalConfiguration, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this SignalConfiguration to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace SignalConfiguration {

            /** Properties of a Signal. */
            interface ISignal {

                /** Signal signalStates */
                signalStates?: ({ [k: string]: metamoto.types.SignalConfiguration.Signal.ISignalState }|null);

                /** Signal description */
                description?: (string|null);

                /** Signal bulbTypes */
                bulbTypes?: (metamoto.types.SignalConfiguration.Signal.IBulbType[]|null);
            }

            /** Represents a Signal. */
            class Signal implements ISignal {

                /**
                 * Constructs a new Signal.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.SignalConfiguration.ISignal);

                /** Signal signalStates. */
                public signalStates: { [k: string]: metamoto.types.SignalConfiguration.Signal.ISignalState };

                /** Signal description. */
                public description: string;

                /** Signal bulbTypes. */
                public bulbTypes: metamoto.types.SignalConfiguration.Signal.IBulbType[];

                /**
                 * Creates a new Signal instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Signal instance
                 */
                public static create(properties?: metamoto.types.SignalConfiguration.ISignal): metamoto.types.SignalConfiguration.Signal;

                /**
                 * Encodes the specified Signal message. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.verify|verify} messages.
                 * @param message Signal message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.SignalConfiguration.ISignal, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Signal message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.verify|verify} messages.
                 * @param message Signal message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.SignalConfiguration.ISignal, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Signal message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Signal
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration.Signal;

                /**
                 * Decodes a Signal message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Signal
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration.Signal;

                /**
                 * Verifies a Signal message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Signal message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Signal
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration.Signal;

                /**
                 * Creates a plain object from a Signal message. Also converts values to other types if specified.
                 * @param message Signal
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.SignalConfiguration.Signal, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Signal to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Signal {

                /** ConnectionState enum. */
                enum ConnectionState {
                    CONNECTION_STATE_UNKNOWN = 0,
                    CONNECTION_STATE_OTHER = 1,
                    GREEN = 2,
                    YELLOW = 3,
                    RED = 4
                }

                /** ConnectionType enum. */
                enum ConnectionType {
                    CONNECTION_TYPE_UNKNOWN = 0,
                    CONNECTION_TYPE_OTHER = 1,
                    PROTECTED = 2,
                    PERMISSIVE = 3
                }

                /** Properties of a Connection. */
                interface IConnection {

                    /** Connection direction */
                    direction?: (metamoto.types.ConnectingRoad.Direction|null);

                    /** Connection state */
                    state?: (metamoto.types.SignalConfiguration.Signal.ConnectionState|null);

                    /** Connection type */
                    type?: (metamoto.types.SignalConfiguration.Signal.ConnectionType|null);
                }

                /** Represents a Connection. */
                class Connection implements IConnection {

                    /**
                     * Constructs a new Connection.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.SignalConfiguration.Signal.IConnection);

                    /** Connection direction. */
                    public direction: metamoto.types.ConnectingRoad.Direction;

                    /** Connection state. */
                    public state: metamoto.types.SignalConfiguration.Signal.ConnectionState;

                    /** Connection type. */
                    public type: metamoto.types.SignalConfiguration.Signal.ConnectionType;

                    /**
                     * Creates a new Connection instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Connection instance
                     */
                    public static create(properties?: metamoto.types.SignalConfiguration.Signal.IConnection): metamoto.types.SignalConfiguration.Signal.Connection;

                    /**
                     * Encodes the specified Connection message. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.Connection.verify|verify} messages.
                     * @param message Connection message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.SignalConfiguration.Signal.IConnection, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Connection message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.Connection.verify|verify} messages.
                     * @param message Connection message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.SignalConfiguration.Signal.IConnection, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Connection message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Connection
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration.Signal.Connection;

                    /**
                     * Decodes a Connection message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Connection
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration.Signal.Connection;

                    /**
                     * Verifies a Connection message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Connection message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Connection
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration.Signal.Connection;

                    /**
                     * Creates a plain object from a Connection message. Also converts values to other types if specified.
                     * @param message Connection
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.SignalConfiguration.Signal.Connection, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Connection to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a BulbState. */
                interface IBulbState {

                    /** BulbState state */
                    state?: (metamoto.types.SignalConfiguration.Signal.BulbState.State|null);
                }

                /** Represents a BulbState. */
                class BulbState implements IBulbState {

                    /**
                     * Constructs a new BulbState.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.SignalConfiguration.Signal.IBulbState);

                    /** BulbState state. */
                    public state: metamoto.types.SignalConfiguration.Signal.BulbState.State;

                    /**
                     * Creates a new BulbState instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns BulbState instance
                     */
                    public static create(properties?: metamoto.types.SignalConfiguration.Signal.IBulbState): metamoto.types.SignalConfiguration.Signal.BulbState;

                    /**
                     * Encodes the specified BulbState message. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.BulbState.verify|verify} messages.
                     * @param message BulbState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.SignalConfiguration.Signal.IBulbState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified BulbState message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.BulbState.verify|verify} messages.
                     * @param message BulbState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.SignalConfiguration.Signal.IBulbState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a BulbState message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns BulbState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration.Signal.BulbState;

                    /**
                     * Decodes a BulbState message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns BulbState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration.Signal.BulbState;

                    /**
                     * Verifies a BulbState message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a BulbState message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns BulbState
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration.Signal.BulbState;

                    /**
                     * Creates a plain object from a BulbState message. Also converts values to other types if specified.
                     * @param message BulbState
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.SignalConfiguration.Signal.BulbState, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this BulbState to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                namespace BulbState {

                    /** State enum. */
                    enum State {
                        OFF = 0,
                        ON = 1,
                        BLINKING = 2,
                        STATE_UNKNOWN = 7
                    }
                }

                /** Properties of a SignalState. */
                interface ISignalState {

                    /** SignalState connections */
                    connections?: (metamoto.types.SignalConfiguration.Signal.IConnection[]|null);

                    /** SignalState bulbStates */
                    bulbStates?: (metamoto.types.SignalConfiguration.Signal.IBulbState[]|null);
                }

                /** Represents a SignalState. */
                class SignalState implements ISignalState {

                    /**
                     * Constructs a new SignalState.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.SignalConfiguration.Signal.ISignalState);

                    /** SignalState connections. */
                    public connections: metamoto.types.SignalConfiguration.Signal.IConnection[];

                    /** SignalState bulbStates. */
                    public bulbStates: metamoto.types.SignalConfiguration.Signal.IBulbState[];

                    /**
                     * Creates a new SignalState instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns SignalState instance
                     */
                    public static create(properties?: metamoto.types.SignalConfiguration.Signal.ISignalState): metamoto.types.SignalConfiguration.Signal.SignalState;

                    /**
                     * Encodes the specified SignalState message. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.SignalState.verify|verify} messages.
                     * @param message SignalState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.SignalConfiguration.Signal.ISignalState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified SignalState message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.SignalState.verify|verify} messages.
                     * @param message SignalState message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.SignalConfiguration.Signal.ISignalState, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a SignalState message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns SignalState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration.Signal.SignalState;

                    /**
                     * Decodes a SignalState message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns SignalState
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration.Signal.SignalState;

                    /**
                     * Verifies a SignalState message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a SignalState message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns SignalState
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration.Signal.SignalState;

                    /**
                     * Creates a plain object from a SignalState message. Also converts values to other types if specified.
                     * @param message SignalState
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.SignalConfiguration.Signal.SignalState, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this SignalState to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** Properties of a BulbType. */
                interface IBulbType {

                    /** BulbType type */
                    type?: (metamoto.types.SignalConfiguration.Signal.BulbType.Type|null);

                    /** BulbType color */
                    color?: (metamoto.types.SignalConfiguration.Signal.BulbType.Color|null);
                }

                /** Represents a BulbType. */
                class BulbType implements IBulbType {

                    /**
                     * Constructs a new BulbType.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.SignalConfiguration.Signal.IBulbType);

                    /** BulbType type. */
                    public type: metamoto.types.SignalConfiguration.Signal.BulbType.Type;

                    /** BulbType color. */
                    public color: metamoto.types.SignalConfiguration.Signal.BulbType.Color;

                    /**
                     * Creates a new BulbType instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns BulbType instance
                     */
                    public static create(properties?: metamoto.types.SignalConfiguration.Signal.IBulbType): metamoto.types.SignalConfiguration.Signal.BulbType;

                    /**
                     * Encodes the specified BulbType message. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.BulbType.verify|verify} messages.
                     * @param message BulbType message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.SignalConfiguration.Signal.IBulbType, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified BulbType message, length delimited. Does not implicitly {@link metamoto.types.SignalConfiguration.Signal.BulbType.verify|verify} messages.
                     * @param message BulbType message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.SignalConfiguration.Signal.IBulbType, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a BulbType message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns BulbType
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.SignalConfiguration.Signal.BulbType;

                    /**
                     * Decodes a BulbType message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns BulbType
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.SignalConfiguration.Signal.BulbType;

                    /**
                     * Verifies a BulbType message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a BulbType message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns BulbType
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.SignalConfiguration.Signal.BulbType;

                    /**
                     * Creates a plain object from a BulbType message. Also converts values to other types if specified.
                     * @param message BulbType
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.SignalConfiguration.Signal.BulbType, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this BulbType to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                namespace BulbType {

                    /** Type enum. */
                    enum Type {
                        TYPE_UNKNOWN = 0,
                        TYPE_OTHER = 1,
                        NORMAL = 2,
                        LEFT = 3,
                        RIGHT = 4,
                        SOFT_LEFT = 5,
                        SOFT_RIGHT = 6
                    }

                    /** Color enum. */
                    enum Color {
                        COLOR_UNKNOWN = 0,
                        COLOR_OTHER = 1,
                        GREEN = 2,
                        YELLOW = 3,
                        RED = 4
                    }
                }
            }
        }

        /** Properties of an IntersectionConfiguration. */
        interface IIntersectionConfiguration {

            /** IntersectionConfiguration intersections */
            intersections?: ({ [k: string]: metamoto.types.Scenario.IIntersection }|null);
        }

        /** Represents an IntersectionConfiguration. */
        class IntersectionConfiguration implements IIntersectionConfiguration {

            /**
             * Constructs a new IntersectionConfiguration.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IIntersectionConfiguration);

            /** IntersectionConfiguration intersections. */
            public intersections: { [k: string]: metamoto.types.Scenario.IIntersection };

            /**
             * Creates a new IntersectionConfiguration instance using the specified properties.
             * @param [properties] Properties to set
             * @returns IntersectionConfiguration instance
             */
            public static create(properties?: metamoto.types.IIntersectionConfiguration): metamoto.types.IntersectionConfiguration;

            /**
             * Encodes the specified IntersectionConfiguration message. Does not implicitly {@link metamoto.types.IntersectionConfiguration.verify|verify} messages.
             * @param message IntersectionConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IIntersectionConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified IntersectionConfiguration message, length delimited. Does not implicitly {@link metamoto.types.IntersectionConfiguration.verify|verify} messages.
             * @param message IntersectionConfiguration message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IIntersectionConfiguration, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an IntersectionConfiguration message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns IntersectionConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.IntersectionConfiguration;

            /**
             * Decodes an IntersectionConfiguration message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns IntersectionConfiguration
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.IntersectionConfiguration;

            /**
             * Verifies an IntersectionConfiguration message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an IntersectionConfiguration message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns IntersectionConfiguration
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.IntersectionConfiguration;

            /**
             * Creates a plain object from an IntersectionConfiguration message. Also converts values to other types if specified.
             * @param message IntersectionConfiguration
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.IntersectionConfiguration, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this IntersectionConfiguration to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a TestCase. */
        interface ITestCase {

            /** TestCase id */
            id?: (string|null);

            /** TestCase name */
            name?: (string|null);

            /** TestCase scenario */
            scenario?: (metamoto.types.IScenario|null);

            /** TestCase egoVehicle */
            egoVehicle?: (metamoto.types.IEgoVehicle|null);

            /** TestCase history */
            history?: (metamoto.types.ITestJob[]|null);

            /** TestCase testManagerUrl */
            testManagerUrl?: (string|null);
        }

        /** Represents a TestCase. */
        class TestCase implements ITestCase {

            /**
             * Constructs a new TestCase.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestCase);

            /** TestCase id. */
            public id: string;

            /** TestCase name. */
            public name: string;

            /** TestCase scenario. */
            public scenario?: (metamoto.types.IScenario|null);

            /** TestCase egoVehicle. */
            public egoVehicle?: (metamoto.types.IEgoVehicle|null);

            /** TestCase history. */
            public history: metamoto.types.ITestJob[];

            /** TestCase testManagerUrl. */
            public testManagerUrl: string;

            /**
             * Creates a new TestCase instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestCase instance
             */
            public static create(properties?: metamoto.types.ITestCase): metamoto.types.TestCase;

            /**
             * Encodes the specified TestCase message. Does not implicitly {@link metamoto.types.TestCase.verify|verify} messages.
             * @param message TestCase message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestCase, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestCase message, length delimited. Does not implicitly {@link metamoto.types.TestCase.verify|verify} messages.
             * @param message TestCase message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestCase, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestCase message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestCase
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestCase;

            /**
             * Decodes a TestCase message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestCase
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestCase;

            /**
             * Verifies a TestCase message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestCase message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestCase
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestCase;

            /**
             * Creates a plain object from a TestCase message. Also converts values to other types if specified.
             * @param message TestCase
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestCase, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestCase to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a TestJob. */
        interface ITestJob {

            /** TestJob jobId */
            jobId?: (string|null);

            /** TestJob sutJobIds */
            sutJobIds?: (string[]|null);

            /** TestJob testRunId */
            testRunId?: (string|null);

            /** TestJob testCaseId */
            testCaseId?: (string|null);

            /** TestJob testCaseName */
            testCaseName?: (string|null);

            /** TestJob testVectorId */
            testVectorId?: (string|null);

            /** TestJob testVectorName */
            testVectorName?: (string|null);

            /** TestJob testVectorStrategy */
            testVectorStrategy?: (metamoto.types.TestVector.Strategy|null);

            /** TestJob startTime */
            startTime?: (string|null);

            /** TestJob endTime */
            endTime?: (string|null);

            /** TestJob computeTime */
            computeTime?: (number|null);

            /** TestJob status */
            status?: (metamoto.types.TestResult.Status|null);

            /** TestJob resultText */
            resultText?: (string|null);

            /** TestJob progress */
            progress?: (number|null);

            /** TestJob durationObjective */
            durationObjective?: (number|null);

            /** TestJob lastJobDuration */
            lastJobDuration?: (number|null);

            /** TestJob logFile */
            logFile?: (string|null);

            /** TestJob resultsFile */
            resultsFile?: (string|null);

            /** TestJob diskUsage */
            diskUsage?: (number|null);

            /** TestJob lastUpdateTime */
            lastUpdateTime?: (string|null);

            /** TestJob sutLogFile */
            sutLogFile?: (string|null);

            /** TestJob parameters */
            parameters?: ({ [k: string]: metamoto.types.IParameter }|null);
        }

        /** Represents a TestJob. */
        class TestJob implements ITestJob {

            /**
             * Constructs a new TestJob.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestJob);

            /** TestJob jobId. */
            public jobId: string;

            /** TestJob sutJobIds. */
            public sutJobIds: string[];

            /** TestJob testRunId. */
            public testRunId: string;

            /** TestJob testCaseId. */
            public testCaseId: string;

            /** TestJob testCaseName. */
            public testCaseName: string;

            /** TestJob testVectorId. */
            public testVectorId: string;

            /** TestJob testVectorName. */
            public testVectorName: string;

            /** TestJob testVectorStrategy. */
            public testVectorStrategy: metamoto.types.TestVector.Strategy;

            /** TestJob startTime. */
            public startTime: string;

            /** TestJob endTime. */
            public endTime: string;

            /** TestJob computeTime. */
            public computeTime: number;

            /** TestJob status. */
            public status: metamoto.types.TestResult.Status;

            /** TestJob resultText. */
            public resultText: string;

            /** TestJob progress. */
            public progress: number;

            /** TestJob durationObjective. */
            public durationObjective: number;

            /** TestJob lastJobDuration. */
            public lastJobDuration: number;

            /** TestJob logFile. */
            public logFile: string;

            /** TestJob resultsFile. */
            public resultsFile: string;

            /** TestJob diskUsage. */
            public diskUsage: number;

            /** TestJob lastUpdateTime. */
            public lastUpdateTime: string;

            /** TestJob sutLogFile. */
            public sutLogFile: string;

            /** TestJob parameters. */
            public parameters: { [k: string]: metamoto.types.IParameter };

            /**
             * Creates a new TestJob instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestJob instance
             */
            public static create(properties?: metamoto.types.ITestJob): metamoto.types.TestJob;

            /**
             * Encodes the specified TestJob message. Does not implicitly {@link metamoto.types.TestJob.verify|verify} messages.
             * @param message TestJob message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestJob, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestJob message, length delimited. Does not implicitly {@link metamoto.types.TestJob.verify|verify} messages.
             * @param message TestJob message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestJob, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestJob message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestJob
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestJob;

            /**
             * Decodes a TestJob message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestJob
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestJob;

            /**
             * Verifies a TestJob message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestJob message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestJob
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestJob;

            /**
             * Creates a plain object from a TestJob message. Also converts values to other types if specified.
             * @param message TestJob
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestJob, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestJob to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a TestResult. */
        interface ITestResult {

            /** TestResult name */
            name?: (string|null);

            /** TestResult timestamp */
            timestamp?: (string|null);

            /** TestResult testEngineVersion */
            testEngineVersion?: (string|null);

            /** TestResult result */
            result?: (metamoto.types.TestResult.IResult|null);

            /** TestResult statistics */
            statistics?: (metamoto.types.TestResult.IStatistics|null);

            /** TestResult topics */
            topics?: (metamoto.types.TestResult.IDataBusTopic[]|null);

            /** TestResult testCaseFile */
            testCaseFile?: (string|null);

            /** TestResult logFile */
            logFile?: (string|null);

            /** TestResult intersectionSeriesLogFile */
            intersectionSeriesLogFile?: (string|null);

            /** TestResult transformsDirectory */
            transformsDirectory?: (string|null);

            /** TestResult dataStreamsDirectory */
            dataStreamsDirectory?: (string|null);

            /** TestResult finalViewsDirectory */
            finalViewsDirectory?: (string|null);

            /** TestResult dataBusDirectory */
            dataBusDirectory?: (string|null);

            /** TestResult egoVehicle */
            egoVehicle?: (metamoto.types.TestResult.IVehicle|null);

            /** TestResult vehicles */
            vehicles?: (metamoto.types.TestResult.IVehicle[]|null);

            /** TestResult pedestrians */
            pedestrians?: (metamoto.types.TestResult.IPedestrian[]|null);

            /** TestResult finalViewFiles */
            finalViewFiles?: (string[]|null);

            /** TestResult dataStreams */
            dataStreams?: (metamoto.types.TestResult.IDataStream[]|null);

            /** TestResult assets */
            assets?: (metamoto.types.IAsset[]|null);

            /** TestResult egoVehicles */
            egoVehicles?: (metamoto.types.TestResult.IVehicle[]|null);
        }

        /** Represents a TestResult. */
        class TestResult implements ITestResult {

            /**
             * Constructs a new TestResult.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestResult);

            /** TestResult name. */
            public name: string;

            /** TestResult timestamp. */
            public timestamp: string;

            /** TestResult testEngineVersion. */
            public testEngineVersion: string;

            /** TestResult result. */
            public result?: (metamoto.types.TestResult.IResult|null);

            /** TestResult statistics. */
            public statistics?: (metamoto.types.TestResult.IStatistics|null);

            /** TestResult topics. */
            public topics: metamoto.types.TestResult.IDataBusTopic[];

            /** TestResult testCaseFile. */
            public testCaseFile: string;

            /** TestResult logFile. */
            public logFile: string;

            /** TestResult intersectionSeriesLogFile. */
            public intersectionSeriesLogFile: string;

            /** TestResult transformsDirectory. */
            public transformsDirectory: string;

            /** TestResult dataStreamsDirectory. */
            public dataStreamsDirectory: string;

            /** TestResult finalViewsDirectory. */
            public finalViewsDirectory: string;

            /** TestResult dataBusDirectory. */
            public dataBusDirectory: string;

            /** TestResult egoVehicle. */
            public egoVehicle?: (metamoto.types.TestResult.IVehicle|null);

            /** TestResult vehicles. */
            public vehicles: metamoto.types.TestResult.IVehicle[];

            /** TestResult pedestrians. */
            public pedestrians: metamoto.types.TestResult.IPedestrian[];

            /** TestResult finalViewFiles. */
            public finalViewFiles: string[];

            /** TestResult dataStreams. */
            public dataStreams: metamoto.types.TestResult.IDataStream[];

            /** TestResult assets. */
            public assets: metamoto.types.IAsset[];

            /** TestResult egoVehicles. */
            public egoVehicles: metamoto.types.TestResult.IVehicle[];

            /**
             * Creates a new TestResult instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestResult instance
             */
            public static create(properties?: metamoto.types.ITestResult): metamoto.types.TestResult;

            /**
             * Encodes the specified TestResult message. Does not implicitly {@link metamoto.types.TestResult.verify|verify} messages.
             * @param message TestResult message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestResult, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestResult message, length delimited. Does not implicitly {@link metamoto.types.TestResult.verify|verify} messages.
             * @param message TestResult message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestResult, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestResult message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestResult
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult;

            /**
             * Decodes a TestResult message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestResult
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult;

            /**
             * Verifies a TestResult message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestResult message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestResult
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult;

            /**
             * Creates a plain object from a TestResult message. Also converts values to other types if specified.
             * @param message TestResult
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestResult, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestResult to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TestResult {

            /** Status enum. */
            enum Status {
                UNKNOWN = 0,
                OTHER = 1,
                PASS = 2,
                FAIL = 3,
                STOP = 4,
                ERROR = 5,
                PENDING = 6,
                RUNNING = 7,
                STOPPING = 8,
                POST_PROCESSING = 9
            }

            /** Properties of a Result. */
            interface IResult {

                /** Result status */
                status?: (metamoto.types.TestResult.Status|null);

                /** Result reason */
                reason?: (string|null);
            }

            /** Represents a Result. */
            class Result implements IResult {

                /**
                 * Constructs a new Result.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IResult);

                /** Result status. */
                public status: metamoto.types.TestResult.Status;

                /** Result reason. */
                public reason: string;

                /**
                 * Creates a new Result instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Result instance
                 */
                public static create(properties?: metamoto.types.TestResult.IResult): metamoto.types.TestResult.Result;

                /**
                 * Encodes the specified Result message. Does not implicitly {@link metamoto.types.TestResult.Result.verify|verify} messages.
                 * @param message Result message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IResult, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Result message, length delimited. Does not implicitly {@link metamoto.types.TestResult.Result.verify|verify} messages.
                 * @param message Result message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IResult, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Result message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Result
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.Result;

                /**
                 * Decodes a Result message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Result
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.Result;

                /**
                 * Verifies a Result message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Result message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Result
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.Result;

                /**
                 * Creates a plain object from a Result message. Also converts values to other types if specified.
                 * @param message Result
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.Result, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Result to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a Statistics. */
            interface IStatistics {

                /** Statistics simulationTime */
                simulationTime?: (number|null);

                /** Statistics realTime */
                realTime?: (number|null);

                /** Statistics renderFrameRate */
                renderFrameRate?: (number|null);

                /** Statistics physicsFrameRate */
                physicsFrameRate?: (number|null);
            }

            /** Represents a Statistics. */
            class Statistics implements IStatistics {

                /**
                 * Constructs a new Statistics.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IStatistics);

                /** Statistics simulationTime. */
                public simulationTime: number;

                /** Statistics realTime. */
                public realTime: number;

                /** Statistics renderFrameRate. */
                public renderFrameRate: number;

                /** Statistics physicsFrameRate. */
                public physicsFrameRate: number;

                /**
                 * Creates a new Statistics instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Statistics instance
                 */
                public static create(properties?: metamoto.types.TestResult.IStatistics): metamoto.types.TestResult.Statistics;

                /**
                 * Encodes the specified Statistics message. Does not implicitly {@link metamoto.types.TestResult.Statistics.verify|verify} messages.
                 * @param message Statistics message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IStatistics, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Statistics message, length delimited. Does not implicitly {@link metamoto.types.TestResult.Statistics.verify|verify} messages.
                 * @param message Statistics message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IStatistics, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Statistics message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Statistics
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.Statistics;

                /**
                 * Decodes a Statistics message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Statistics
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.Statistics;

                /**
                 * Verifies a Statistics message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Statistics message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Statistics
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.Statistics;

                /**
                 * Creates a plain object from a Statistics message. Also converts values to other types if specified.
                 * @param message Statistics
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.Statistics, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Statistics to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a DataBusTopic. */
            interface IDataBusTopic {

                /** DataBusTopic name */
                name?: (string|null);

                /** DataBusTopic messageFile */
                messageFile?: (string|null);
            }

            /** Represents a DataBusTopic. */
            class DataBusTopic implements IDataBusTopic {

                /**
                 * Constructs a new DataBusTopic.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IDataBusTopic);

                /** DataBusTopic name. */
                public name: string;

                /** DataBusTopic messageFile. */
                public messageFile: string;

                /**
                 * Creates a new DataBusTopic instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns DataBusTopic instance
                 */
                public static create(properties?: metamoto.types.TestResult.IDataBusTopic): metamoto.types.TestResult.DataBusTopic;

                /**
                 * Encodes the specified DataBusTopic message. Does not implicitly {@link metamoto.types.TestResult.DataBusTopic.verify|verify} messages.
                 * @param message DataBusTopic message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IDataBusTopic, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified DataBusTopic message, length delimited. Does not implicitly {@link metamoto.types.TestResult.DataBusTopic.verify|verify} messages.
                 * @param message DataBusTopic message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IDataBusTopic, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a DataBusTopic message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns DataBusTopic
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.DataBusTopic;

                /**
                 * Decodes a DataBusTopic message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns DataBusTopic
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.DataBusTopic;

                /**
                 * Verifies a DataBusTopic message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a DataBusTopic message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns DataBusTopic
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.DataBusTopic;

                /**
                 * Creates a plain object from a DataBusTopic message. Also converts values to other types if specified.
                 * @param message DataBusTopic
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.DataBusTopic, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this DataBusTopic to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a Vehicle. */
            interface IVehicle {

                /** Vehicle instance */
                instance?: (metamoto.types.IVehicleInstance|null);

                /** Vehicle transformsFile */
                transformsFile?: (string|null);

                /** Vehicle pose */
                pose?: (metamoto.types.IPose|null);

                /** Vehicle binaries */
                binaries?: (metamoto.types.TestResult.Vehicle.IBinary[]|null);

                /** Vehicle sensorMounts */
                sensorMounts?: (metamoto.types.ISensorMount[]|null);

                /** Vehicle id */
                id?: (string|null);

                /** Vehicle resultsDirectory */
                resultsDirectory?: (string|null);

                /** Vehicle topics */
                topics?: (metamoto.types.TestResult.IDataBusTopic[]|null);

                /** Vehicle dataStreams */
                dataStreams?: (metamoto.types.TestResult.IDataStream[]|null);

                /** Vehicle visualizationsFile */
                visualizationsFile?: (string|null);
            }

            /** Represents a Vehicle. */
            class Vehicle implements IVehicle {

                /**
                 * Constructs a new Vehicle.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IVehicle);

                /** Vehicle instance. */
                public instance?: (metamoto.types.IVehicleInstance|null);

                /** Vehicle transformsFile. */
                public transformsFile: string;

                /** Vehicle pose. */
                public pose?: (metamoto.types.IPose|null);

                /** Vehicle binaries. */
                public binaries: metamoto.types.TestResult.Vehicle.IBinary[];

                /** Vehicle sensorMounts. */
                public sensorMounts: metamoto.types.ISensorMount[];

                /** Vehicle id. */
                public id: string;

                /** Vehicle resultsDirectory. */
                public resultsDirectory: string;

                /** Vehicle topics. */
                public topics: metamoto.types.TestResult.IDataBusTopic[];

                /** Vehicle dataStreams. */
                public dataStreams: metamoto.types.TestResult.IDataStream[];

                /** Vehicle visualizationsFile. */
                public visualizationsFile: string;

                /**
                 * Creates a new Vehicle instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Vehicle instance
                 */
                public static create(properties?: metamoto.types.TestResult.IVehicle): metamoto.types.TestResult.Vehicle;

                /**
                 * Encodes the specified Vehicle message. Does not implicitly {@link metamoto.types.TestResult.Vehicle.verify|verify} messages.
                 * @param message Vehicle message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Vehicle message, length delimited. Does not implicitly {@link metamoto.types.TestResult.Vehicle.verify|verify} messages.
                 * @param message Vehicle message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Vehicle message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Vehicle
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.Vehicle;

                /**
                 * Decodes a Vehicle message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Vehicle
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.Vehicle;

                /**
                 * Verifies a Vehicle message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Vehicle message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Vehicle
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.Vehicle;

                /**
                 * Creates a plain object from a Vehicle message. Also converts values to other types if specified.
                 * @param message Vehicle
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.Vehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Vehicle to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace Vehicle {

                /** Properties of a Binary. */
                interface IBinary {

                    /** Binary controller */
                    controller?: (metamoto.types.IController|null);

                    /** Binary sensor */
                    sensor?: (metamoto.types.ISensor|null);

                    /** Binary resultsDirectory */
                    resultsDirectory?: (string|null);

                    /** Binary resultsData */
                    resultsData?: (metamoto.types.IResultMetadata[]|null);
                }

                /** Represents a Binary. */
                class Binary implements IBinary {

                    /**
                     * Constructs a new Binary.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.types.TestResult.Vehicle.IBinary);

                    /** Binary controller. */
                    public controller?: (metamoto.types.IController|null);

                    /** Binary sensor. */
                    public sensor?: (metamoto.types.ISensor|null);

                    /** Binary resultsDirectory. */
                    public resultsDirectory: string;

                    /** Binary resultsData. */
                    public resultsData: metamoto.types.IResultMetadata[];

                    /** Binary typeOneof. */
                    public typeOneof?: ("controller"|"sensor");

                    /**
                     * Creates a new Binary instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns Binary instance
                     */
                    public static create(properties?: metamoto.types.TestResult.Vehicle.IBinary): metamoto.types.TestResult.Vehicle.Binary;

                    /**
                     * Encodes the specified Binary message. Does not implicitly {@link metamoto.types.TestResult.Vehicle.Binary.verify|verify} messages.
                     * @param message Binary message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.types.TestResult.Vehicle.IBinary, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified Binary message, length delimited. Does not implicitly {@link metamoto.types.TestResult.Vehicle.Binary.verify|verify} messages.
                     * @param message Binary message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.types.TestResult.Vehicle.IBinary, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a Binary message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns Binary
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.Vehicle.Binary;

                    /**
                     * Decodes a Binary message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns Binary
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.Vehicle.Binary;

                    /**
                     * Verifies a Binary message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a Binary message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns Binary
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.Vehicle.Binary;

                    /**
                     * Creates a plain object from a Binary message. Also converts values to other types if specified.
                     * @param message Binary
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.types.TestResult.Vehicle.Binary, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this Binary to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }
            }

            /** Properties of a Pedestrian. */
            interface IPedestrian {

                /** Pedestrian name */
                name?: (string|null);

                /** Pedestrian transformsFile */
                transformsFile?: (string|null);
            }

            /** Represents a Pedestrian. */
            class Pedestrian implements IPedestrian {

                /**
                 * Constructs a new Pedestrian.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IPedestrian);

                /** Pedestrian name. */
                public name: string;

                /** Pedestrian transformsFile. */
                public transformsFile: string;

                /**
                 * Creates a new Pedestrian instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Pedestrian instance
                 */
                public static create(properties?: metamoto.types.TestResult.IPedestrian): metamoto.types.TestResult.Pedestrian;

                /**
                 * Encodes the specified Pedestrian message. Does not implicitly {@link metamoto.types.TestResult.Pedestrian.verify|verify} messages.
                 * @param message Pedestrian message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IPedestrian, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Pedestrian message, length delimited. Does not implicitly {@link metamoto.types.TestResult.Pedestrian.verify|verify} messages.
                 * @param message Pedestrian message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IPedestrian, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Pedestrian message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Pedestrian
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.Pedestrian;

                /**
                 * Decodes a Pedestrian message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Pedestrian
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.Pedestrian;

                /**
                 * Verifies a Pedestrian message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Pedestrian message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Pedestrian
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.Pedestrian;

                /**
                 * Creates a plain object from a Pedestrian message. Also converts values to other types if specified.
                 * @param message Pedestrian
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.Pedestrian, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Pedestrian to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a DataStream. */
            interface IDataStream {

                /** DataStream name */
                name?: (string|null);

                /** DataStream description */
                description?: (string|null);

                /** DataStream units */
                units?: (string|null);

                /** DataStream filename */
                filename?: (string|null);
            }

            /** Represents a DataStream. */
            class DataStream implements IDataStream {

                /**
                 * Constructs a new DataStream.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.TestResult.IDataStream);

                /** DataStream name. */
                public name: string;

                /** DataStream description. */
                public description: string;

                /** DataStream units. */
                public units: string;

                /** DataStream filename. */
                public filename: string;

                /**
                 * Creates a new DataStream instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns DataStream instance
                 */
                public static create(properties?: metamoto.types.TestResult.IDataStream): metamoto.types.TestResult.DataStream;

                /**
                 * Encodes the specified DataStream message. Does not implicitly {@link metamoto.types.TestResult.DataStream.verify|verify} messages.
                 * @param message DataStream message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.TestResult.IDataStream, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified DataStream message, length delimited. Does not implicitly {@link metamoto.types.TestResult.DataStream.verify|verify} messages.
                 * @param message DataStream message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.TestResult.IDataStream, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a DataStream message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns DataStream
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestResult.DataStream;

                /**
                 * Decodes a DataStream message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns DataStream
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestResult.DataStream;

                /**
                 * Verifies a DataStream message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a DataStream message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns DataStream
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.TestResult.DataStream;

                /**
                 * Creates a plain object from a DataStream message. Also converts values to other types if specified.
                 * @param message DataStream
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.TestResult.DataStream, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this DataStream to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a TestRun. */
        interface ITestRun {

            /** TestRun id */
            id?: (string|null);

            /** TestRun testSuiteId */
            testSuiteId?: (string|null);

            /** TestRun testSuiteName */
            testSuiteName?: (string|null);

            /** TestRun startTime */
            startTime?: (string|null);

            /** TestRun endTime */
            endTime?: (string|null);

            /** TestRun status */
            status?: (metamoto.types.TestResult.Status|null);

            /** TestRun resultText */
            resultText?: (string|null);

            /** TestRun numPassed */
            numPassed?: (number|null);

            /** TestRun numFailed */
            numFailed?: (number|null);

            /** TestRun numStopped */
            numStopped?: (number|null);

            /** TestRun numErrored */
            numErrored?: (number|null);

            /** TestRun numRunning */
            numRunning?: (number|null);

            /** TestRun numPending */
            numPending?: (number|null);

            /** TestRun computeTime */
            computeTime?: (number|null);

            /** TestRun startedBy */
            startedBy?: (string|null);

            /** TestRun progress */
            progress?: (number|null);

            /** TestRun testJobs */
            testJobs?: (metamoto.types.ITestJob[]|null);
        }

        /** Represents a TestRun. */
        class TestRun implements ITestRun {

            /**
             * Constructs a new TestRun.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestRun);

            /** TestRun id. */
            public id: string;

            /** TestRun testSuiteId. */
            public testSuiteId: string;

            /** TestRun testSuiteName. */
            public testSuiteName: string;

            /** TestRun startTime. */
            public startTime: string;

            /** TestRun endTime. */
            public endTime: string;

            /** TestRun status. */
            public status: metamoto.types.TestResult.Status;

            /** TestRun resultText. */
            public resultText: string;

            /** TestRun numPassed. */
            public numPassed: number;

            /** TestRun numFailed. */
            public numFailed: number;

            /** TestRun numStopped. */
            public numStopped: number;

            /** TestRun numErrored. */
            public numErrored: number;

            /** TestRun numRunning. */
            public numRunning: number;

            /** TestRun numPending. */
            public numPending: number;

            /** TestRun computeTime. */
            public computeTime: number;

            /** TestRun startedBy. */
            public startedBy: string;

            /** TestRun progress. */
            public progress: number;

            /** TestRun testJobs. */
            public testJobs: metamoto.types.ITestJob[];

            /**
             * Creates a new TestRun instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestRun instance
             */
            public static create(properties?: metamoto.types.ITestRun): metamoto.types.TestRun;

            /**
             * Encodes the specified TestRun message. Does not implicitly {@link metamoto.types.TestRun.verify|verify} messages.
             * @param message TestRun message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestRun, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestRun message, length delimited. Does not implicitly {@link metamoto.types.TestRun.verify|verify} messages.
             * @param message TestRun message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestRun, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestRun message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestRun
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestRun;

            /**
             * Decodes a TestRun message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestRun
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestRun;

            /**
             * Verifies a TestRun message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestRun message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestRun
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestRun;

            /**
             * Creates a plain object from a TestRun message. Also converts values to other types if specified.
             * @param message TestRun
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestRun, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestRun to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a TestSuite. */
        interface ITestSuite {

            /** TestSuite id */
            id?: (string|null);

            /** TestSuite name */
            name?: (string|null);

            /** TestSuite schedule */
            schedule?: (metamoto.types.TestSuite.ScheduleType|null);

            /** TestSuite startTime */
            startTime?: (string|null);

            /** TestSuite nextRunTime */
            nextRunTime?: (string|null);

            /** TestSuite testVectorIds */
            testVectorIds?: (string[]|null);

            /** TestSuite priority */
            priority?: (number|null);
        }

        /** Represents a TestSuite. */
        class TestSuite implements ITestSuite {

            /**
             * Constructs a new TestSuite.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestSuite);

            /** TestSuite id. */
            public id: string;

            /** TestSuite name. */
            public name: string;

            /** TestSuite schedule. */
            public schedule: metamoto.types.TestSuite.ScheduleType;

            /** TestSuite startTime. */
            public startTime: string;

            /** TestSuite nextRunTime. */
            public nextRunTime: string;

            /** TestSuite testVectorIds. */
            public testVectorIds: string[];

            /** TestSuite priority. */
            public priority: number;

            /**
             * Creates a new TestSuite instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestSuite instance
             */
            public static create(properties?: metamoto.types.ITestSuite): metamoto.types.TestSuite;

            /**
             * Encodes the specified TestSuite message. Does not implicitly {@link metamoto.types.TestSuite.verify|verify} messages.
             * @param message TestSuite message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestSuite, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestSuite message, length delimited. Does not implicitly {@link metamoto.types.TestSuite.verify|verify} messages.
             * @param message TestSuite message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestSuite, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestSuite message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestSuite
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestSuite;

            /**
             * Decodes a TestSuite message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestSuite
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestSuite;

            /**
             * Verifies a TestSuite message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestSuite message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestSuite
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestSuite;

            /**
             * Creates a plain object from a TestSuite message. Also converts values to other types if specified.
             * @param message TestSuite
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestSuite, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestSuite to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TestSuite {

            /** ScheduleType enum. */
            enum ScheduleType {
                UNKNOWN = 0,
                OTHER = 1,
                RUN_ONCE = 2,
                DAILY = 3,
                WEEKLY = 4,
                DISABLE = 5
            }
        }

        /** Properties of a TestVector. */
        interface ITestVector {

            /** TestVector id */
            id?: (string|null);

            /** TestVector name */
            name?: (string|null);

            /** TestVector strategy */
            strategy?: (metamoto.types.TestVector.Strategy|null);

            /** TestVector numTests */
            numTests?: (number|null);

            /** TestVector scenario */
            scenario?: (metamoto.types.IScenario|null);

            /** TestVector egoVehicle */
            egoVehicle?: (metamoto.types.IEgoVehicle|null);

            /** TestVector parameters */
            parameters?: ({ [k: string]: metamoto.types.IParameter }|null);
        }

        /** Represents a TestVector. */
        class TestVector implements ITestVector {

            /**
             * Constructs a new TestVector.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITestVector);

            /** TestVector id. */
            public id: string;

            /** TestVector name. */
            public name: string;

            /** TestVector strategy. */
            public strategy: metamoto.types.TestVector.Strategy;

            /** TestVector numTests. */
            public numTests: number;

            /** TestVector scenario. */
            public scenario?: (metamoto.types.IScenario|null);

            /** TestVector egoVehicle. */
            public egoVehicle?: (metamoto.types.IEgoVehicle|null);

            /** TestVector parameters. */
            public parameters: { [k: string]: metamoto.types.IParameter };

            /**
             * Creates a new TestVector instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TestVector instance
             */
            public static create(properties?: metamoto.types.ITestVector): metamoto.types.TestVector;

            /**
             * Encodes the specified TestVector message. Does not implicitly {@link metamoto.types.TestVector.verify|verify} messages.
             * @param message TestVector message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITestVector, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TestVector message, length delimited. Does not implicitly {@link metamoto.types.TestVector.verify|verify} messages.
             * @param message TestVector message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITestVector, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TestVector message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TestVector
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TestVector;

            /**
             * Decodes a TestVector message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TestVector
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TestVector;

            /**
             * Verifies a TestVector message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TestVector message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TestVector
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TestVector;

            /**
             * Creates a plain object from a TestVector message. Also converts values to other types if specified.
             * @param message TestVector
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TestVector, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TestVector to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TestVector {

            /** Strategy enum. */
            enum Strategy {
                UNKNOWN = 0,
                OTHER = 1,
                SINGLE = 2,
                EXHAUSTIVE = 3,
                RANDOM = 4,
                EDGES = 5
            }
        }

        /** Properties of a TrafficLight. */
        interface ITrafficLight {

            /** TrafficLight id */
            id?: (string|null);

            /** TrafficLight signalId */
            signalId?: (string|null);

            /** TrafficLight pose */
            pose?: (metamoto.types.IPose|null);

            /** TrafficLight shape */
            shape?: (metamoto.types.IShape|null);

            /** TrafficLight type */
            type?: (metamoto.types.TrafficLight.Type|null);

            /** TrafficLight color */
            color?: (metamoto.types.TrafficLight.Color|null);

            /** TrafficLight mode */
            mode?: (metamoto.types.TrafficLight.Mode|null);

            /** TrafficLight intersectionId */
            intersectionId?: (string|null);

            /** TrafficLight state */
            state?: (metamoto.types.SignalConfiguration.Signal.ISignalState|null);

            /** TrafficLight bulbTypes */
            bulbTypes?: (metamoto.types.SignalConfiguration.Signal.IBulbType[]|null);
        }

        /** Represents a TrafficLight. */
        class TrafficLight implements ITrafficLight {

            /**
             * Constructs a new TrafficLight.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITrafficLight);

            /** TrafficLight id. */
            public id: string;

            /** TrafficLight signalId. */
            public signalId: string;

            /** TrafficLight pose. */
            public pose?: (metamoto.types.IPose|null);

            /** TrafficLight shape. */
            public shape?: (metamoto.types.IShape|null);

            /** TrafficLight type. */
            public type: metamoto.types.TrafficLight.Type;

            /** TrafficLight color. */
            public color: metamoto.types.TrafficLight.Color;

            /** TrafficLight mode. */
            public mode: metamoto.types.TrafficLight.Mode;

            /** TrafficLight intersectionId. */
            public intersectionId: string;

            /** TrafficLight state. */
            public state?: (metamoto.types.SignalConfiguration.Signal.ISignalState|null);

            /** TrafficLight bulbTypes. */
            public bulbTypes: metamoto.types.SignalConfiguration.Signal.IBulbType[];

            /**
             * Creates a new TrafficLight instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TrafficLight instance
             */
            public static create(properties?: metamoto.types.ITrafficLight): metamoto.types.TrafficLight;

            /**
             * Encodes the specified TrafficLight message. Does not implicitly {@link metamoto.types.TrafficLight.verify|verify} messages.
             * @param message TrafficLight message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITrafficLight, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TrafficLight message, length delimited. Does not implicitly {@link metamoto.types.TrafficLight.verify|verify} messages.
             * @param message TrafficLight message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITrafficLight, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TrafficLight message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TrafficLight
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TrafficLight;

            /**
             * Decodes a TrafficLight message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TrafficLight
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TrafficLight;

            /**
             * Verifies a TrafficLight message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TrafficLight message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TrafficLight
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TrafficLight;

            /**
             * Creates a plain object from a TrafficLight message. Also converts values to other types if specified.
             * @param message TrafficLight
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TrafficLight, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TrafficLight to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TrafficLight {

            /** Type enum. */
            enum Type {
                TYPE_UNKNOWN = 0,
                TYPE_OTHER = 1,
                NORMAL = 2,
                LEFT = 3,
                LEFT_STRAIGHT = 4,
                RIGHT = 5,
                RIGHT_STRAIGHT = 6
            }

            /** Color enum. */
            enum Color {
                COLOR_UNKNOWN = 0,
                COLOR_OTHER = 1,
                RED = 2,
                YELLOW = 3,
                GREEN = 4
            }

            /** Mode enum. */
            enum Mode {
                MODE_UNKNOWN = 0,
                MODE_OTHER = 1,
                OFF = 2,
                CONSTANT = 3,
                BLINKING = 4
            }
        }

        /** Properties of a TrafficSign. */
        interface ITrafficSign {

            /** TrafficSign id */
            id?: (string|null);

            /** TrafficSign signalId */
            signalId?: (string|null);

            /** TrafficSign pose */
            pose?: (metamoto.types.IPose|null);

            /** TrafficSign shape */
            shape?: (metamoto.types.IShape|null);

            /** TrafficSign type */
            type?: (metamoto.types.TrafficSign.Type|null);

            /** TrafficSign value */
            value?: (number|null);
        }

        /** Represents a TrafficSign. */
        class TrafficSign implements ITrafficSign {

            /**
             * Constructs a new TrafficSign.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.ITrafficSign);

            /** TrafficSign id. */
            public id: string;

            /** TrafficSign signalId. */
            public signalId: string;

            /** TrafficSign pose. */
            public pose?: (metamoto.types.IPose|null);

            /** TrafficSign shape. */
            public shape?: (metamoto.types.IShape|null);

            /** TrafficSign type. */
            public type: metamoto.types.TrafficSign.Type;

            /** TrafficSign value. */
            public value: number;

            /**
             * Creates a new TrafficSign instance using the specified properties.
             * @param [properties] Properties to set
             * @returns TrafficSign instance
             */
            public static create(properties?: metamoto.types.ITrafficSign): metamoto.types.TrafficSign;

            /**
             * Encodes the specified TrafficSign message. Does not implicitly {@link metamoto.types.TrafficSign.verify|verify} messages.
             * @param message TrafficSign message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.ITrafficSign, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified TrafficSign message, length delimited. Does not implicitly {@link metamoto.types.TrafficSign.verify|verify} messages.
             * @param message TrafficSign message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.ITrafficSign, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a TrafficSign message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns TrafficSign
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.TrafficSign;

            /**
             * Decodes a TrafficSign message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns TrafficSign
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.TrafficSign;

            /**
             * Verifies a TrafficSign message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a TrafficSign message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns TrafficSign
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.TrafficSign;

            /**
             * Creates a plain object from a TrafficSign message. Also converts values to other types if specified.
             * @param message TrafficSign
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.TrafficSign, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this TrafficSign to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace TrafficSign {

            /** Type enum. */
            enum Type {
                UNKNOWN = 0,
                OTHER = 1,
                STOP = 2,
                YIELD = 3,
                DO_NOT_ENTER = 4,
                NO_LEFT_TURN = 5,
                NO_RIGHT_TURN = 6,
                NO_U_TURN = 7,
                NO_LEFT_OR_U_TURN = 8,
                ONE_WAY = 9,
                SPEED_LIMIT = 10,
                NO_TRUCKS = 11,
                NO_PEDESTRIANS = 12,
                NO_BICYCLES = 13,
                NO_PARKING = 14
            }
        }

        /** Properties of a Vector3. */
        interface IVector3 {

            /** Vector3 x */
            x?: (number|null);

            /** Vector3 y */
            y?: (number|null);

            /** Vector3 z */
            z?: (number|null);
        }

        /** Represents a Vector3. */
        class Vector3 implements IVector3 {

            /**
             * Constructs a new Vector3.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVector3);

            /** Vector3 x. */
            public x: number;

            /** Vector3 y. */
            public y: number;

            /** Vector3 z. */
            public z: number;

            /**
             * Creates a new Vector3 instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Vector3 instance
             */
            public static create(properties?: metamoto.types.IVector3): metamoto.types.Vector3;

            /**
             * Encodes the specified Vector3 message. Does not implicitly {@link metamoto.types.Vector3.verify|verify} messages.
             * @param message Vector3 message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVector3, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Vector3 message, length delimited. Does not implicitly {@link metamoto.types.Vector3.verify|verify} messages.
             * @param message Vector3 message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVector3, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Vector3 message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Vector3
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Vector3;

            /**
             * Decodes a Vector3 message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Vector3
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Vector3;

            /**
             * Verifies a Vector3 message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Vector3 message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Vector3
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Vector3;

            /**
             * Creates a plain object from a Vector3 message. Also converts values to other types if specified.
             * @param message Vector3
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Vector3, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Vector3 to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Vehicle. */
        interface IVehicle {

            /** Vehicle id */
            id?: (string|null);

            /** Vehicle pose */
            pose?: (metamoto.types.IPose|null);

            /** Vehicle roadPoint */
            roadPoint?: (metamoto.types.IRoadPoint[]|null);

            /** Vehicle velocity */
            velocity?: (metamoto.types.IVelocity|null);

            /** Vehicle acceleration */
            acceleration?: (metamoto.types.IAcceleration|null);

            /** Vehicle shape */
            shape?: (metamoto.types.IShape|null);

            /** Vehicle type */
            type?: (metamoto.types.Vehicle.Type|null);

            /** Vehicle headLights */
            headLights?: (metamoto.types.Vehicle.LightState|null);

            /** Vehicle reverseLights */
            reverseLights?: (metamoto.types.Vehicle.LightState|null);

            /** Vehicle brakeLights */
            brakeLights?: (metamoto.types.Vehicle.LightState|null);

            /** Vehicle signalLights */
            signalLights?: (metamoto.types.Vehicle.SignalLightState|null);

            /** Vehicle model */
            model?: (string|null);

            /** Vehicle paint */
            paint?: (string|null);
        }

        /** Represents a Vehicle. */
        class Vehicle implements IVehicle {

            /**
             * Constructs a new Vehicle.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVehicle);

            /** Vehicle id. */
            public id: string;

            /** Vehicle pose. */
            public pose?: (metamoto.types.IPose|null);

            /** Vehicle roadPoint. */
            public roadPoint: metamoto.types.IRoadPoint[];

            /** Vehicle velocity. */
            public velocity?: (metamoto.types.IVelocity|null);

            /** Vehicle acceleration. */
            public acceleration?: (metamoto.types.IAcceleration|null);

            /** Vehicle shape. */
            public shape?: (metamoto.types.IShape|null);

            /** Vehicle type. */
            public type: metamoto.types.Vehicle.Type;

            /** Vehicle headLights. */
            public headLights: metamoto.types.Vehicle.LightState;

            /** Vehicle reverseLights. */
            public reverseLights: metamoto.types.Vehicle.LightState;

            /** Vehicle brakeLights. */
            public brakeLights: metamoto.types.Vehicle.LightState;

            /** Vehicle signalLights. */
            public signalLights: metamoto.types.Vehicle.SignalLightState;

            /** Vehicle model. */
            public model: string;

            /** Vehicle paint. */
            public paint: string;

            /**
             * Creates a new Vehicle instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Vehicle instance
             */
            public static create(properties?: metamoto.types.IVehicle): metamoto.types.Vehicle;

            /**
             * Encodes the specified Vehicle message. Does not implicitly {@link metamoto.types.Vehicle.verify|verify} messages.
             * @param message Vehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Vehicle message, length delimited. Does not implicitly {@link metamoto.types.Vehicle.verify|verify} messages.
             * @param message Vehicle message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVehicle, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Vehicle message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Vehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Vehicle;

            /**
             * Decodes a Vehicle message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Vehicle
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Vehicle;

            /**
             * Verifies a Vehicle message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Vehicle message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Vehicle
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Vehicle;

            /**
             * Creates a plain object from a Vehicle message. Also converts values to other types if specified.
             * @param message Vehicle
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Vehicle, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Vehicle to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace Vehicle {

            /** Type enum. */
            enum Type {
                TYPE_UNKNOWN = 0,
                TYPE_OTHER = 1,
                CAR = 2,
                TRUCK = 3,
                BUS = 4,
                MOTORCYCLE = 5,
                BICYCLE = 6,
                TRAIN = 7,
                STREET_CAR = 8
            }

            /** LightState enum. */
            enum LightState {
                LIGHT_STATE_UNKNOWN = 0,
                LIGHT_STATE_OTHER = 1,
                OFF = 2,
                ON = 3,
                STRONG = 4
            }

            /** SignalLightState enum. */
            enum SignalLightState {
                SIGNAL_LIGHT_STATE_UNKNOWN = 0,
                SIGNAL_LIGHT_STATE_OTHER = 1,
                SIGNAL_LIGHT_STATE_OFF = 2,
                LEFT = 3,
                RIGHT = 4,
                HAZARD = 5
            }

            /** GearSelector enum. */
            enum GearSelector {
                GEAR_UNKNOWN = 0,
                GEAR_OTHER = 1,
                GEAR_P = 2,
                GEAR_R = 3,
                GEAR_N = 4,
                GEAR_D = 5,
                GEAR_L = 6
            }
        }

        /** Properties of a VehicleInfo. */
        interface IVehicleInfo {

            /** VehicleInfo maxSteerAngle */
            maxSteerAngle?: (number|null);

            /** VehicleInfo wheelBase */
            wheelBase?: (number|null);

            /** VehicleInfo maxAcceleration */
            maxAcceleration?: (number|null);

            /** VehicleInfo maxBrake */
            maxBrake?: (number|null);

            /** VehicleInfo coastingDeceleration */
            coastingDeceleration?: (number|null);

            /** VehicleInfo dimensions */
            dimensions?: (metamoto.types.IVector3|null);

            /** VehicleInfo mass */
            mass?: (number|null);

            /** VehicleInfo type */
            type?: (metamoto.types.Vehicle.Type|null);
        }

        /** Represents a VehicleInfo. */
        class VehicleInfo implements IVehicleInfo {

            /**
             * Constructs a new VehicleInfo.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVehicleInfo);

            /** VehicleInfo maxSteerAngle. */
            public maxSteerAngle: number;

            /** VehicleInfo wheelBase. */
            public wheelBase: number;

            /** VehicleInfo maxAcceleration. */
            public maxAcceleration: number;

            /** VehicleInfo maxBrake. */
            public maxBrake: number;

            /** VehicleInfo coastingDeceleration. */
            public coastingDeceleration: number;

            /** VehicleInfo dimensions. */
            public dimensions?: (metamoto.types.IVector3|null);

            /** VehicleInfo mass. */
            public mass: number;

            /** VehicleInfo type. */
            public type: metamoto.types.Vehicle.Type;

            /**
             * Creates a new VehicleInfo instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VehicleInfo instance
             */
            public static create(properties?: metamoto.types.IVehicleInfo): metamoto.types.VehicleInfo;

            /**
             * Encodes the specified VehicleInfo message. Does not implicitly {@link metamoto.types.VehicleInfo.verify|verify} messages.
             * @param message VehicleInfo message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVehicleInfo, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VehicleInfo message, length delimited. Does not implicitly {@link metamoto.types.VehicleInfo.verify|verify} messages.
             * @param message VehicleInfo message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVehicleInfo, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VehicleInfo message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VehicleInfo
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VehicleInfo;

            /**
             * Decodes a VehicleInfo message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VehicleInfo
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VehicleInfo;

            /**
             * Verifies a VehicleInfo message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VehicleInfo message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VehicleInfo
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.VehicleInfo;

            /**
             * Creates a plain object from a VehicleInfo message. Also converts values to other types if specified.
             * @param message VehicleInfo
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.VehicleInfo, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VehicleInfo to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a VehicleInstance. */
        interface IVehicleInstance {

            /** VehicleInstance model */
            model?: (string|null);

            /** VehicleInstance type */
            type?: (metamoto.types.Vehicle.Type|null);

            /** VehicleInstance body */
            body?: (metamoto.types.VehicleInstance.IBody|null);
        }

        /** Represents a VehicleInstance. */
        class VehicleInstance implements IVehicleInstance {

            /**
             * Constructs a new VehicleInstance.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVehicleInstance);

            /** VehicleInstance model. */
            public model: string;

            /** VehicleInstance type. */
            public type: metamoto.types.Vehicle.Type;

            /** VehicleInstance body. */
            public body?: (metamoto.types.VehicleInstance.IBody|null);

            /** VehicleInstance modelOneof. */
            public modelOneof?: ("model"|"type");

            /**
             * Creates a new VehicleInstance instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VehicleInstance instance
             */
            public static create(properties?: metamoto.types.IVehicleInstance): metamoto.types.VehicleInstance;

            /**
             * Encodes the specified VehicleInstance message. Does not implicitly {@link metamoto.types.VehicleInstance.verify|verify} messages.
             * @param message VehicleInstance message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVehicleInstance, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VehicleInstance message, length delimited. Does not implicitly {@link metamoto.types.VehicleInstance.verify|verify} messages.
             * @param message VehicleInstance message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVehicleInstance, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VehicleInstance message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VehicleInstance
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VehicleInstance;

            /**
             * Decodes a VehicleInstance message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VehicleInstance
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VehicleInstance;

            /**
             * Verifies a VehicleInstance message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VehicleInstance message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VehicleInstance
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.VehicleInstance;

            /**
             * Creates a plain object from a VehicleInstance message. Also converts values to other types if specified.
             * @param message VehicleInstance
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.VehicleInstance, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VehicleInstance to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace VehicleInstance {

            /** Properties of a Body. */
            interface IBody {

                /** Body paint */
                paint?: (string|null);

                /** Body dirt */
                dirt?: (google.protobuf.IFloatValue|null);
            }

            /** Represents a Body. */
            class Body implements IBody {

                /**
                 * Constructs a new Body.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.types.VehicleInstance.IBody);

                /** Body paint. */
                public paint: string;

                /** Body dirt. */
                public dirt?: (google.protobuf.IFloatValue|null);

                /**
                 * Creates a new Body instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns Body instance
                 */
                public static create(properties?: metamoto.types.VehicleInstance.IBody): metamoto.types.VehicleInstance.Body;

                /**
                 * Encodes the specified Body message. Does not implicitly {@link metamoto.types.VehicleInstance.Body.verify|verify} messages.
                 * @param message Body message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.types.VehicleInstance.IBody, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified Body message, length delimited. Does not implicitly {@link metamoto.types.VehicleInstance.Body.verify|verify} messages.
                 * @param message Body message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.types.VehicleInstance.IBody, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a Body message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns Body
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VehicleInstance.Body;

                /**
                 * Decodes a Body message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns Body
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VehicleInstance.Body;

                /**
                 * Verifies a Body message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a Body message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns Body
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.types.VehicleInstance.Body;

                /**
                 * Creates a plain object from a Body message. Also converts values to other types if specified.
                 * @param message Body
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.types.VehicleInstance.Body, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this Body to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a Velocity. */
        interface IVelocity {

            /** Velocity linear */
            linear?: (metamoto.types.IVector3|null);

            /** Velocity angular */
            angular?: (metamoto.types.IVector3|null);
        }

        /** Represents a Velocity. */
        class Velocity implements IVelocity {

            /**
             * Constructs a new Velocity.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVelocity);

            /** Velocity linear. */
            public linear?: (metamoto.types.IVector3|null);

            /** Velocity angular. */
            public angular?: (metamoto.types.IVector3|null);

            /**
             * Creates a new Velocity instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Velocity instance
             */
            public static create(properties?: metamoto.types.IVelocity): metamoto.types.Velocity;

            /**
             * Encodes the specified Velocity message. Does not implicitly {@link metamoto.types.Velocity.verify|verify} messages.
             * @param message Velocity message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVelocity, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Velocity message, length delimited. Does not implicitly {@link metamoto.types.Velocity.verify|verify} messages.
             * @param message Velocity message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVelocity, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Velocity message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Velocity
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Velocity;

            /**
             * Decodes a Velocity message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Velocity
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Velocity;

            /**
             * Verifies a Velocity message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Velocity message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Velocity
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Velocity;

            /**
             * Creates a plain object from a Velocity message. Also converts values to other types if specified.
             * @param message Velocity
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Velocity, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Velocity to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Version. */
        interface IVersion {

            /** Version major */
            major?: (number|null);

            /** Version minor */
            minor?: (number|null);

            /** Version patch */
            patch?: (number|null);

            /** Version build */
            build?: (string|null);

            /** Version timestamp */
            timestamp?: (string|null);
        }

        /** Represents a Version. */
        class Version implements IVersion {

            /**
             * Constructs a new Version.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVersion);

            /** Version major. */
            public major: number;

            /** Version minor. */
            public minor: number;

            /** Version patch. */
            public patch: number;

            /** Version build. */
            public build: string;

            /** Version timestamp. */
            public timestamp: string;

            /**
             * Creates a new Version instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Version instance
             */
            public static create(properties?: metamoto.types.IVersion): metamoto.types.Version;

            /**
             * Encodes the specified Version message. Does not implicitly {@link metamoto.types.Version.verify|verify} messages.
             * @param message Version message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVersion, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Version message, length delimited. Does not implicitly {@link metamoto.types.Version.verify|verify} messages.
             * @param message Version message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVersion, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Version message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Version
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Version;

            /**
             * Decodes a Version message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Version
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Version;

            /**
             * Verifies a Version message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Version message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Version
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Version;

            /**
             * Creates a plain object from a Version message. Also converts values to other types if specified.
             * @param message Version
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Version, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Version to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a VisualPathPoint. */
        interface IVisualPathPoint {

            /** VisualPathPoint position */
            position?: (metamoto.types.IVector3|null);

            /** VisualPathPoint normal */
            normal?: (metamoto.types.IVector3|null);

            /** VisualPathPoint smoothness */
            smoothness?: (number|null);

            /** VisualPathPoint glue */
            glue?: (boolean|null);

            /** VisualPathPoint width */
            width?: (number|null);

            /** VisualPathPoint color */
            color?: (string|null);

            /** VisualPathPoint transparency */
            transparency?: (number|null);
        }

        /** Represents a VisualPathPoint. */
        class VisualPathPoint implements IVisualPathPoint {

            /**
             * Constructs a new VisualPathPoint.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVisualPathPoint);

            /** VisualPathPoint position. */
            public position?: (metamoto.types.IVector3|null);

            /** VisualPathPoint normal. */
            public normal?: (metamoto.types.IVector3|null);

            /** VisualPathPoint smoothness. */
            public smoothness: number;

            /** VisualPathPoint glue. */
            public glue: boolean;

            /** VisualPathPoint width. */
            public width: number;

            /** VisualPathPoint color. */
            public color: string;

            /** VisualPathPoint transparency. */
            public transparency: number;

            /**
             * Creates a new VisualPathPoint instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VisualPathPoint instance
             */
            public static create(properties?: metamoto.types.IVisualPathPoint): metamoto.types.VisualPathPoint;

            /**
             * Encodes the specified VisualPathPoint message. Does not implicitly {@link metamoto.types.VisualPathPoint.verify|verify} messages.
             * @param message VisualPathPoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVisualPathPoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VisualPathPoint message, length delimited. Does not implicitly {@link metamoto.types.VisualPathPoint.verify|verify} messages.
             * @param message VisualPathPoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVisualPathPoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VisualPathPoint message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VisualPathPoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VisualPathPoint;

            /**
             * Decodes a VisualPathPoint message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VisualPathPoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VisualPathPoint;

            /**
             * Verifies a VisualPathPoint message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VisualPathPoint message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VisualPathPoint
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.VisualPathPoint;

            /**
             * Creates a plain object from a VisualPathPoint message. Also converts values to other types if specified.
             * @param message VisualPathPoint
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.VisualPathPoint, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VisualPathPoint to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a VisualPath. */
        interface IVisualPath {

            /** VisualPath pathPoints */
            pathPoints?: (metamoto.types.IVisualPathPoint[]|null);
        }

        /** Represents a VisualPath. */
        class VisualPath implements IVisualPath {

            /**
             * Constructs a new VisualPath.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IVisualPath);

            /** VisualPath pathPoints. */
            public pathPoints: metamoto.types.IVisualPathPoint[];

            /**
             * Creates a new VisualPath instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VisualPath instance
             */
            public static create(properties?: metamoto.types.IVisualPath): metamoto.types.VisualPath;

            /**
             * Encodes the specified VisualPath message. Does not implicitly {@link metamoto.types.VisualPath.verify|verify} messages.
             * @param message VisualPath message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IVisualPath, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VisualPath message, length delimited. Does not implicitly {@link metamoto.types.VisualPath.verify|verify} messages.
             * @param message VisualPath message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IVisualPath, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VisualPath message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VisualPath
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.VisualPath;

            /**
             * Decodes a VisualPath message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VisualPath
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.VisualPath;

            /**
             * Verifies a VisualPath message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VisualPath message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VisualPath
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.VisualPath;

            /**
             * Creates a plain object from a VisualPath message. Also converts values to other types if specified.
             * @param message VisualPath
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.VisualPath, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VisualPath to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Waypoint. */
        interface IWaypoint {

            /** Waypoint worldPoint */
            worldPoint?: (metamoto.types.IPose|null);

            /** Waypoint roadPoint */
            roadPoint?: (metamoto.types.IRoadPoint|null);

            /** Waypoint targetSpeed */
            targetSpeed?: (google.protobuf.IFloatValue|null);

            /** Waypoint purePursuit */
            purePursuit?: (boolean|null);

            /** Waypoint idleTime */
            idleTime?: (number|null);

            /** Waypoint relativeObjectId */
            relativeObjectId?: (string|null);
        }

        /** Represents a Waypoint. */
        class Waypoint implements IWaypoint {

            /**
             * Constructs a new Waypoint.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.types.IWaypoint);

            /** Waypoint worldPoint. */
            public worldPoint?: (metamoto.types.IPose|null);

            /** Waypoint roadPoint. */
            public roadPoint?: (metamoto.types.IRoadPoint|null);

            /** Waypoint targetSpeed. */
            public targetSpeed?: (google.protobuf.IFloatValue|null);

            /** Waypoint purePursuit. */
            public purePursuit: boolean;

            /** Waypoint idleTime. */
            public idleTime: number;

            /** Waypoint relativeObjectId. */
            public relativeObjectId: string;

            /** Waypoint pointOneof. */
            public pointOneof?: ("worldPoint"|"roadPoint");

            /**
             * Creates a new Waypoint instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Waypoint instance
             */
            public static create(properties?: metamoto.types.IWaypoint): metamoto.types.Waypoint;

            /**
             * Encodes the specified Waypoint message. Does not implicitly {@link metamoto.types.Waypoint.verify|verify} messages.
             * @param message Waypoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.types.IWaypoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Waypoint message, length delimited. Does not implicitly {@link metamoto.types.Waypoint.verify|verify} messages.
             * @param message Waypoint message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.types.IWaypoint, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Waypoint message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Waypoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.types.Waypoint;

            /**
             * Decodes a Waypoint message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Waypoint
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.types.Waypoint;

            /**
             * Verifies a Waypoint message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Waypoint message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Waypoint
             */
            public static fromObject(object: { [k: string]: any }): metamoto.types.Waypoint;

            /**
             * Creates a plain object from a Waypoint message. Also converts values to other types if specified.
             * @param message Waypoint
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.types.Waypoint, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Waypoint to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }
    }

    /** Namespace messages. */
    namespace messages {

        /** Properties of a Camera. */
        interface ICamera {

            /** Camera image */
            image?: (metamoto.types.IImage|null);

            /** Camera objects */
            objects?: (metamoto.types.ICameraObject[]|null);

            /** Camera K */
            K?: (number[]|null);

            /** Camera D */
            D?: (number[]|null);

            /** Camera P */
            P?: (number[]|null);
        }

        /** Represents a Camera. */
        class Camera implements ICamera {

            /**
             * Constructs a new Camera.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.ICamera);

            /** Camera image. */
            public image?: (metamoto.types.IImage|null);

            /** Camera objects. */
            public objects: metamoto.types.ICameraObject[];

            /** Camera K. */
            public K: number[];

            /** Camera D. */
            public D: number[];

            /** Camera P. */
            public P: number[];

            /**
             * Creates a new Camera instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Camera instance
             */
            public static create(properties?: metamoto.messages.ICamera): metamoto.messages.Camera;

            /**
             * Encodes the specified Camera message. Does not implicitly {@link metamoto.messages.Camera.verify|verify} messages.
             * @param message Camera message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.ICamera, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Camera message, length delimited. Does not implicitly {@link metamoto.messages.Camera.verify|verify} messages.
             * @param message Camera message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.ICamera, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Camera message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Camera
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Camera;

            /**
             * Decodes a Camera message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Camera
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Camera;

            /**
             * Verifies a Camera message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Camera message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Camera
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Camera;

            /**
             * Creates a plain object from a Camera message. Also converts values to other types if specified.
             * @param message Camera
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Camera, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Camera to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Header. */
        interface IHeader {

            /** Header time */
            time?: (number|null);
        }

        /** Represents a Header. */
        class Header implements IHeader {

            /**
             * Constructs a new Header.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IHeader);

            /** Header time. */
            public time: number;

            /**
             * Creates a new Header instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Header instance
             */
            public static create(properties?: metamoto.messages.IHeader): metamoto.messages.Header;

            /**
             * Encodes the specified Header message. Does not implicitly {@link metamoto.messages.Header.verify|verify} messages.
             * @param message Header message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IHeader, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Header message, length delimited. Does not implicitly {@link metamoto.messages.Header.verify|verify} messages.
             * @param message Header message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IHeader, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Header message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Header
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Header;

            /**
             * Decodes a Header message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Header
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Header;

            /**
             * Verifies a Header message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Header message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Header
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Header;

            /**
             * Creates a plain object from a Header message. Also converts values to other types if specified.
             * @param message Header
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Header, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Header to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a DataBusMessage. */
        interface IDataBusMessage {

            /** DataBusMessage header */
            header?: (metamoto.messages.IHeader|null);

            /** DataBusMessage vehicleState */
            vehicleState?: (metamoto.messages.IVehicleState|null);

            /** DataBusMessage vehicleControls */
            vehicleControls?: (metamoto.messages.IVehicleControls|null);

            /** DataBusMessage camera */
            camera?: (metamoto.messages.ICamera|null);

            /** DataBusMessage lidar */
            lidar?: (metamoto.messages.ILidar|null);

            /** DataBusMessage radar */
            radar?: (metamoto.messages.IRadar|null);

            /** DataBusMessage gps */
            gps?: (metamoto.messages.IGPS|null);

            /** DataBusMessage imu */
            imu?: (metamoto.messages.IIMU|null);

            /** DataBusMessage localizer */
            localizer?: (metamoto.messages.ILocalizer|null);

            /** DataBusMessage v2x */
            v2x?: (metamoto.messages.IV2X|null);

            /** DataBusMessage event */
            event?: (metamoto.messages.IEvent|null);

            /** DataBusMessage perception */
            perception?: (metamoto.messages.IPerception|null);

            /** DataBusMessage groundTruth */
            groundTruth?: (metamoto.messages.IGroundTruth|null);

            /** DataBusMessage other */
            other?: (google.protobuf.IAny|null);
        }

        /** Represents a DataBusMessage. */
        class DataBusMessage implements IDataBusMessage {

            /**
             * Constructs a new DataBusMessage.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IDataBusMessage);

            /** DataBusMessage header. */
            public header?: (metamoto.messages.IHeader|null);

            /** DataBusMessage vehicleState. */
            public vehicleState?: (metamoto.messages.IVehicleState|null);

            /** DataBusMessage vehicleControls. */
            public vehicleControls?: (metamoto.messages.IVehicleControls|null);

            /** DataBusMessage camera. */
            public camera?: (metamoto.messages.ICamera|null);

            /** DataBusMessage lidar. */
            public lidar?: (metamoto.messages.ILidar|null);

            /** DataBusMessage radar. */
            public radar?: (metamoto.messages.IRadar|null);

            /** DataBusMessage gps. */
            public gps?: (metamoto.messages.IGPS|null);

            /** DataBusMessage imu. */
            public imu?: (metamoto.messages.IIMU|null);

            /** DataBusMessage localizer. */
            public localizer?: (metamoto.messages.ILocalizer|null);

            /** DataBusMessage v2x. */
            public v2x?: (metamoto.messages.IV2X|null);

            /** DataBusMessage event. */
            public event?: (metamoto.messages.IEvent|null);

            /** DataBusMessage perception. */
            public perception?: (metamoto.messages.IPerception|null);

            /** DataBusMessage groundTruth. */
            public groundTruth?: (metamoto.messages.IGroundTruth|null);

            /** DataBusMessage other. */
            public other?: (google.protobuf.IAny|null);

            /** DataBusMessage dataOneof. */
            public dataOneof?: ("vehicleState"|"vehicleControls"|"camera"|"lidar"|"radar"|"gps"|"imu"|"localizer"|"v2x"|"event"|"perception"|"groundTruth"|"other");

            /**
             * Creates a new DataBusMessage instance using the specified properties.
             * @param [properties] Properties to set
             * @returns DataBusMessage instance
             */
            public static create(properties?: metamoto.messages.IDataBusMessage): metamoto.messages.DataBusMessage;

            /**
             * Encodes the specified DataBusMessage message. Does not implicitly {@link metamoto.messages.DataBusMessage.verify|verify} messages.
             * @param message DataBusMessage message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IDataBusMessage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified DataBusMessage message, length delimited. Does not implicitly {@link metamoto.messages.DataBusMessage.verify|verify} messages.
             * @param message DataBusMessage message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IDataBusMessage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a DataBusMessage message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns DataBusMessage
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.DataBusMessage;

            /**
             * Decodes a DataBusMessage message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns DataBusMessage
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.DataBusMessage;

            /**
             * Verifies a DataBusMessage message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a DataBusMessage message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns DataBusMessage
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.DataBusMessage;

            /**
             * Creates a plain object from a DataBusMessage message. Also converts values to other types if specified.
             * @param message DataBusMessage
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.DataBusMessage, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this DataBusMessage to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Event. */
        interface IEvent {

            /** Event event */
            event?: (metamoto.types.IEvent|null);

            /** Event infraction */
            infraction?: (metamoto.types.IInfraction|null);

            /** Event reportedAction */
            reportedAction?: (metamoto.types.Action|null);

            /** Event primaryId */
            primaryId?: (string|null);

            /** Event secondaryId */
            secondaryId?: (string|null);

            /** Event value */
            value?: (number|null);

            /** Event description */
            description?: (string|null);
        }

        /** Represents an Event. */
        class Event implements IEvent {

            /**
             * Constructs a new Event.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IEvent);

            /** Event event. */
            public event?: (metamoto.types.IEvent|null);

            /** Event infraction. */
            public infraction?: (metamoto.types.IInfraction|null);

            /** Event reportedAction. */
            public reportedAction: metamoto.types.Action;

            /** Event primaryId. */
            public primaryId: string;

            /** Event secondaryId. */
            public secondaryId: string;

            /** Event value. */
            public value: number;

            /** Event description. */
            public description: string;

            /** Event typeOneof. */
            public typeOneof?: ("event"|"infraction"|"reportedAction");

            /**
             * Creates a new Event instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Event instance
             */
            public static create(properties?: metamoto.messages.IEvent): metamoto.messages.Event;

            /**
             * Encodes the specified Event message. Does not implicitly {@link metamoto.messages.Event.verify|verify} messages.
             * @param message Event message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IEvent, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Event message, length delimited. Does not implicitly {@link metamoto.messages.Event.verify|verify} messages.
             * @param message Event message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IEvent, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Event message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Event
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Event;

            /**
             * Decodes an Event message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Event
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Event;

            /**
             * Verifies an Event message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Event message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Event
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Event;

            /**
             * Creates a plain object from an Event message. Also converts values to other types if specified.
             * @param message Event
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Event, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Event to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a GPS. */
        interface IGPS {

            /** GPS coordinate */
            coordinate?: (metamoto.types.IGeoCoordinates|null);
        }

        /** Represents a GPS. */
        class GPS implements IGPS {

            /**
             * Constructs a new GPS.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IGPS);

            /** GPS coordinate. */
            public coordinate?: (metamoto.types.IGeoCoordinates|null);

            /**
             * Creates a new GPS instance using the specified properties.
             * @param [properties] Properties to set
             * @returns GPS instance
             */
            public static create(properties?: metamoto.messages.IGPS): metamoto.messages.GPS;

            /**
             * Encodes the specified GPS message. Does not implicitly {@link metamoto.messages.GPS.verify|verify} messages.
             * @param message GPS message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IGPS, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified GPS message, length delimited. Does not implicitly {@link metamoto.messages.GPS.verify|verify} messages.
             * @param message GPS message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IGPS, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a GPS message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns GPS
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.GPS;

            /**
             * Decodes a GPS message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns GPS
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.GPS;

            /**
             * Verifies a GPS message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a GPS message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns GPS
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.GPS;

            /**
             * Creates a plain object from a GPS message. Also converts values to other types if specified.
             * @param message GPS
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.GPS, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this GPS to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a GroundTruth. */
        interface IGroundTruth {

            /** GroundTruth environment */
            environment?: (metamoto.types.IEnvironment|null);

            /** GroundTruth egoVehicle */
            egoVehicle?: (metamoto.types.IVehicle|null);

            /** GroundTruth vehicles */
            vehicles?: (metamoto.types.IVehicle[]|null);

            /** GroundTruth pedestrians */
            pedestrians?: (metamoto.types.IPedestrian[]|null);

            /** GroundTruth trafficLights */
            trafficLights?: (metamoto.types.ITrafficLight[]|null);

            /** GroundTruth trafficSigns */
            trafficSigns?: (metamoto.types.ITrafficSign[]|null);

            /** GroundTruth egoVehicles */
            egoVehicles?: (metamoto.types.IVehicle[]|null);
        }

        /** Represents a GroundTruth. */
        class GroundTruth implements IGroundTruth {

            /**
             * Constructs a new GroundTruth.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IGroundTruth);

            /** GroundTruth environment. */
            public environment?: (metamoto.types.IEnvironment|null);

            /** GroundTruth egoVehicle. */
            public egoVehicle?: (metamoto.types.IVehicle|null);

            /** GroundTruth vehicles. */
            public vehicles: metamoto.types.IVehicle[];

            /** GroundTruth pedestrians. */
            public pedestrians: metamoto.types.IPedestrian[];

            /** GroundTruth trafficLights. */
            public trafficLights: metamoto.types.ITrafficLight[];

            /** GroundTruth trafficSigns. */
            public trafficSigns: metamoto.types.ITrafficSign[];

            /** GroundTruth egoVehicles. */
            public egoVehicles: metamoto.types.IVehicle[];

            /**
             * Creates a new GroundTruth instance using the specified properties.
             * @param [properties] Properties to set
             * @returns GroundTruth instance
             */
            public static create(properties?: metamoto.messages.IGroundTruth): metamoto.messages.GroundTruth;

            /**
             * Encodes the specified GroundTruth message. Does not implicitly {@link metamoto.messages.GroundTruth.verify|verify} messages.
             * @param message GroundTruth message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IGroundTruth, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified GroundTruth message, length delimited. Does not implicitly {@link metamoto.messages.GroundTruth.verify|verify} messages.
             * @param message GroundTruth message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IGroundTruth, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a GroundTruth message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns GroundTruth
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.GroundTruth;

            /**
             * Decodes a GroundTruth message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns GroundTruth
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.GroundTruth;

            /**
             * Verifies a GroundTruth message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a GroundTruth message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns GroundTruth
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.GroundTruth;

            /**
             * Creates a plain object from a GroundTruth message. Also converts values to other types if specified.
             * @param message GroundTruth
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.GroundTruth, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this GroundTruth to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a IMU. */
        interface IIMU {

            /** IMU angularVelocity */
            angularVelocity?: (metamoto.types.IVector3|null);

            /** IMU linearAcceleration */
            linearAcceleration?: (metamoto.types.IVector3|null);
        }

        /** Represents a IMU. */
        class IMU implements IIMU {

            /**
             * Constructs a new IMU.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IIMU);

            /** IMU angularVelocity. */
            public angularVelocity?: (metamoto.types.IVector3|null);

            /** IMU linearAcceleration. */
            public linearAcceleration?: (metamoto.types.IVector3|null);

            /**
             * Creates a new IMU instance using the specified properties.
             * @param [properties] Properties to set
             * @returns IMU instance
             */
            public static create(properties?: metamoto.messages.IIMU): metamoto.messages.IMU;

            /**
             * Encodes the specified IMU message. Does not implicitly {@link metamoto.messages.IMU.verify|verify} messages.
             * @param message IMU message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IIMU, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified IMU message, length delimited. Does not implicitly {@link metamoto.messages.IMU.verify|verify} messages.
             * @param message IMU message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IIMU, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a IMU message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns IMU
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.IMU;

            /**
             * Decodes a IMU message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns IMU
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.IMU;

            /**
             * Verifies a IMU message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a IMU message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns IMU
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.IMU;

            /**
             * Creates a plain object from a IMU message. Also converts values to other types if specified.
             * @param message IMU
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.IMU, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this IMU to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Lidar. */
        interface ILidar {

            /** Lidar timeIncrement */
            timeIncrement?: (number|null);

            /** Lidar groups */
            groups?: (metamoto.types.ILaserReturnGroup[]|null);
        }

        /** Represents a Lidar. */
        class Lidar implements ILidar {

            /**
             * Constructs a new Lidar.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.ILidar);

            /** Lidar timeIncrement. */
            public timeIncrement: number;

            /** Lidar groups. */
            public groups: metamoto.types.ILaserReturnGroup[];

            /**
             * Creates a new Lidar instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Lidar instance
             */
            public static create(properties?: metamoto.messages.ILidar): metamoto.messages.Lidar;

            /**
             * Encodes the specified Lidar message. Does not implicitly {@link metamoto.messages.Lidar.verify|verify} messages.
             * @param message Lidar message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.ILidar, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Lidar message, length delimited. Does not implicitly {@link metamoto.messages.Lidar.verify|verify} messages.
             * @param message Lidar message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.ILidar, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Lidar message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Lidar
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Lidar;

            /**
             * Decodes a Lidar message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Lidar
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Lidar;

            /**
             * Verifies a Lidar message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Lidar message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Lidar
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Lidar;

            /**
             * Creates a plain object from a Lidar message. Also converts values to other types if specified.
             * @param message Lidar
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Lidar, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Lidar to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Localizer. */
        interface ILocalizer {

            /** Localizer position */
            position?: (metamoto.types.IVector3|null);

            /** Localizer orientation */
            orientation?: (metamoto.types.IQuaternion|null);

            /** Localizer linearVelocity */
            linearVelocity?: (metamoto.types.IVector3|null);

            /** Localizer linearAcceleration */
            linearAcceleration?: (metamoto.types.IVector3|null);

            /** Localizer angularVelocity */
            angularVelocity?: (metamoto.types.IVector3|null);

            /** Localizer uncertainty */
            uncertainty?: (metamoto.messages.IUncertainty|null);
        }

        /** Represents a Localizer. */
        class Localizer implements ILocalizer {

            /**
             * Constructs a new Localizer.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.ILocalizer);

            /** Localizer position. */
            public position?: (metamoto.types.IVector3|null);

            /** Localizer orientation. */
            public orientation?: (metamoto.types.IQuaternion|null);

            /** Localizer linearVelocity. */
            public linearVelocity?: (metamoto.types.IVector3|null);

            /** Localizer linearAcceleration. */
            public linearAcceleration?: (metamoto.types.IVector3|null);

            /** Localizer angularVelocity. */
            public angularVelocity?: (metamoto.types.IVector3|null);

            /** Localizer uncertainty. */
            public uncertainty?: (metamoto.messages.IUncertainty|null);

            /**
             * Creates a new Localizer instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Localizer instance
             */
            public static create(properties?: metamoto.messages.ILocalizer): metamoto.messages.Localizer;

            /**
             * Encodes the specified Localizer message. Does not implicitly {@link metamoto.messages.Localizer.verify|verify} messages.
             * @param message Localizer message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.ILocalizer, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Localizer message, length delimited. Does not implicitly {@link metamoto.messages.Localizer.verify|verify} messages.
             * @param message Localizer message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.ILocalizer, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Localizer message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Localizer
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Localizer;

            /**
             * Decodes a Localizer message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Localizer
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Localizer;

            /**
             * Verifies a Localizer message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Localizer message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Localizer
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Localizer;

            /**
             * Creates a plain object from a Localizer message. Also converts values to other types if specified.
             * @param message Localizer
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Localizer, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Localizer to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Uncertainty. */
        interface IUncertainty {

            /** Uncertainty positionStdDev */
            positionStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty orientationAxisStdDev */
            orientationAxisStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty orientationAngleStdDev */
            orientationAngleStdDev?: (number|null);

            /** Uncertainty linearVelocityStdDev */
            linearVelocityStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty linearAccelerationStdDev */
            linearAccelerationStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty angularVelocityStdDev */
            angularVelocityStdDev?: (metamoto.types.IVector3|null);
        }

        /** Represents an Uncertainty. */
        class Uncertainty implements IUncertainty {

            /**
             * Constructs a new Uncertainty.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IUncertainty);

            /** Uncertainty positionStdDev. */
            public positionStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty orientationAxisStdDev. */
            public orientationAxisStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty orientationAngleStdDev. */
            public orientationAngleStdDev: number;

            /** Uncertainty linearVelocityStdDev. */
            public linearVelocityStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty linearAccelerationStdDev. */
            public linearAccelerationStdDev?: (metamoto.types.IVector3|null);

            /** Uncertainty angularVelocityStdDev. */
            public angularVelocityStdDev?: (metamoto.types.IVector3|null);

            /**
             * Creates a new Uncertainty instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Uncertainty instance
             */
            public static create(properties?: metamoto.messages.IUncertainty): metamoto.messages.Uncertainty;

            /**
             * Encodes the specified Uncertainty message. Does not implicitly {@link metamoto.messages.Uncertainty.verify|verify} messages.
             * @param message Uncertainty message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IUncertainty, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Uncertainty message, length delimited. Does not implicitly {@link metamoto.messages.Uncertainty.verify|verify} messages.
             * @param message Uncertainty message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IUncertainty, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Uncertainty message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Uncertainty
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Uncertainty;

            /**
             * Decodes an Uncertainty message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Uncertainty
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Uncertainty;

            /**
             * Verifies an Uncertainty message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Uncertainty message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Uncertainty
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Uncertainty;

            /**
             * Creates a plain object from an Uncertainty message. Also converts values to other types if specified.
             * @param message Uncertainty
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Uncertainty, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Uncertainty to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a LogMessage. */
        interface ILogMessage {

            /** LogMessage time */
            time?: (number|null);

            /** LogMessage level */
            level?: (metamoto.messages.LogMessage.Level|null);

            /** LogMessage className */
            className?: (string|null);

            /** LogMessage method */
            method?: (string|null);

            /** LogMessage lineNumber */
            lineNumber?: (number|null);

            /** LogMessage message */
            message?: (string|null);

            /** LogMessage realTime */
            realTime?: (number|null);

            /** LogMessage filename */
            filename?: (string|null);
        }

        /** Represents a LogMessage. */
        class LogMessage implements ILogMessage {

            /**
             * Constructs a new LogMessage.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.ILogMessage);

            /** LogMessage time. */
            public time: number;

            /** LogMessage level. */
            public level: metamoto.messages.LogMessage.Level;

            /** LogMessage className. */
            public className: string;

            /** LogMessage method. */
            public method: string;

            /** LogMessage lineNumber. */
            public lineNumber: number;

            /** LogMessage message. */
            public message: string;

            /** LogMessage realTime. */
            public realTime: number;

            /** LogMessage filename. */
            public filename: string;

            /**
             * Creates a new LogMessage instance using the specified properties.
             * @param [properties] Properties to set
             * @returns LogMessage instance
             */
            public static create(properties?: metamoto.messages.ILogMessage): metamoto.messages.LogMessage;

            /**
             * Encodes the specified LogMessage message. Does not implicitly {@link metamoto.messages.LogMessage.verify|verify} messages.
             * @param message LogMessage message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.ILogMessage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified LogMessage message, length delimited. Does not implicitly {@link metamoto.messages.LogMessage.verify|verify} messages.
             * @param message LogMessage message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.ILogMessage, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a LogMessage message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns LogMessage
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.LogMessage;

            /**
             * Decodes a LogMessage message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns LogMessage
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.LogMessage;

            /**
             * Verifies a LogMessage message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a LogMessage message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns LogMessage
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.LogMessage;

            /**
             * Creates a plain object from a LogMessage message. Also converts values to other types if specified.
             * @param message LogMessage
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.LogMessage, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this LogMessage to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace LogMessage {

            /** Level enum. */
            enum Level {
                LEVEL_UNKNOWN = 0,
                LEVEL_ERROR = 1,
                LEVEL_WARNING = 2,
                LEVEL_INFO = 3,
                LEVEL_TRACE = 4
            }
        }

        /** Properties of a Perception. */
        interface IPerception {

            /** Perception objects */
            objects?: (metamoto.types.IPerceptionObject[]|null);
        }

        /** Represents a Perception. */
        class Perception implements IPerception {

            /**
             * Constructs a new Perception.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IPerception);

            /** Perception objects. */
            public objects: metamoto.types.IPerceptionObject[];

            /**
             * Creates a new Perception instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Perception instance
             */
            public static create(properties?: metamoto.messages.IPerception): metamoto.messages.Perception;

            /**
             * Encodes the specified Perception message. Does not implicitly {@link metamoto.messages.Perception.verify|verify} messages.
             * @param message Perception message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IPerception, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Perception message, length delimited. Does not implicitly {@link metamoto.messages.Perception.verify|verify} messages.
             * @param message Perception message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IPerception, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Perception message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Perception
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Perception;

            /**
             * Decodes a Perception message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Perception
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Perception;

            /**
             * Verifies a Perception message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Perception message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Perception
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Perception;

            /**
             * Creates a plain object from a Perception message. Also converts values to other types if specified.
             * @param message Perception
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Perception, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Perception to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Radar. */
        interface IRadar {

            /** Radar objects */
            objects?: (metamoto.types.IRadarObject[]|null);
        }

        /** Represents a Radar. */
        class Radar implements IRadar {

            /**
             * Constructs a new Radar.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IRadar);

            /** Radar objects. */
            public objects: metamoto.types.IRadarObject[];

            /**
             * Creates a new Radar instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Radar instance
             */
            public static create(properties?: metamoto.messages.IRadar): metamoto.messages.Radar;

            /**
             * Encodes the specified Radar message. Does not implicitly {@link metamoto.messages.Radar.verify|verify} messages.
             * @param message Radar message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IRadar, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Radar message, length delimited. Does not implicitly {@link metamoto.messages.Radar.verify|verify} messages.
             * @param message Radar message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IRadar, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Radar message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Radar
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Radar;

            /**
             * Decodes a Radar message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Radar
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Radar;

            /**
             * Verifies a Radar message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Radar message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Radar
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Radar;

            /**
             * Creates a plain object from a Radar message. Also converts values to other types if specified.
             * @param message Radar
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Radar, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Radar to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a V2X. */
        interface IV2X {

            /** V2X bsmPart_1 */
            bsmPart_1?: (metamoto.messages.V2X.IBsmPart1[]|null);
        }

        /** Represents a V2X. */
        class V2X implements IV2X {

            /**
             * Constructs a new V2X.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IV2X);

            /** V2X bsmPart_1. */
            public bsmPart_1: metamoto.messages.V2X.IBsmPart1[];

            /**
             * Creates a new V2X instance using the specified properties.
             * @param [properties] Properties to set
             * @returns V2X instance
             */
            public static create(properties?: metamoto.messages.IV2X): metamoto.messages.V2X;

            /**
             * Encodes the specified V2X message. Does not implicitly {@link metamoto.messages.V2X.verify|verify} messages.
             * @param message V2X message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IV2X, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified V2X message, length delimited. Does not implicitly {@link metamoto.messages.V2X.verify|verify} messages.
             * @param message V2X message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IV2X, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a V2X message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns V2X
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.V2X;

            /**
             * Decodes a V2X message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns V2X
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.V2X;

            /**
             * Verifies a V2X message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a V2X message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns V2X
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.V2X;

            /**
             * Creates a plain object from a V2X message. Also converts values to other types if specified.
             * @param message V2X
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.V2X, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this V2X to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace V2X {

            /** Properties of a BsmPart1. */
            interface IBsmPart1 {

                /** BsmPart1 objectId */
                objectId?: (number|null);

                /** BsmPart1 timeStamp */
                timeStamp?: (number|null);

                /** BsmPart1 position */
                position?: (metamoto.types.IGeoCoordinates|null);

                /** BsmPart1 accuracy */
                accuracy?: (metamoto.messages.V2X.IPositionalAccuracy|null);

                /** BsmPart1 transmissionState */
                transmissionState?: (metamoto.types.Vehicle.GearSelector|null);

                /** BsmPart1 linearVelocity */
                linearVelocity?: (metamoto.types.IVector3|null);

                /** BsmPart1 steeringWheelAngle */
                steeringWheelAngle?: (number|null);

                /** BsmPart1 linearAcceleration */
                linearAcceleration?: (metamoto.types.IVector3|null);

                /** BsmPart1 yawRate */
                yawRate?: (number|null);

                /** BsmPart1 brakes */
                brakes?: (metamoto.messages.V2X.IBrakeSystemStatus|null);

                /** BsmPart1 vehicleSize */
                vehicleSize?: (metamoto.types.IVector3|null);
            }

            /** Represents a BsmPart1. */
            class BsmPart1 implements IBsmPart1 {

                /**
                 * Constructs a new BsmPart1.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.messages.V2X.IBsmPart1);

                /** BsmPart1 objectId. */
                public objectId: number;

                /** BsmPart1 timeStamp. */
                public timeStamp: number;

                /** BsmPart1 position. */
                public position?: (metamoto.types.IGeoCoordinates|null);

                /** BsmPart1 accuracy. */
                public accuracy?: (metamoto.messages.V2X.IPositionalAccuracy|null);

                /** BsmPart1 transmissionState. */
                public transmissionState: metamoto.types.Vehicle.GearSelector;

                /** BsmPart1 linearVelocity. */
                public linearVelocity?: (metamoto.types.IVector3|null);

                /** BsmPart1 steeringWheelAngle. */
                public steeringWheelAngle: number;

                /** BsmPart1 linearAcceleration. */
                public linearAcceleration?: (metamoto.types.IVector3|null);

                /** BsmPart1 yawRate. */
                public yawRate: number;

                /** BsmPart1 brakes. */
                public brakes?: (metamoto.messages.V2X.IBrakeSystemStatus|null);

                /** BsmPart1 vehicleSize. */
                public vehicleSize?: (metamoto.types.IVector3|null);

                /**
                 * Creates a new BsmPart1 instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns BsmPart1 instance
                 */
                public static create(properties?: metamoto.messages.V2X.IBsmPart1): metamoto.messages.V2X.BsmPart1;

                /**
                 * Encodes the specified BsmPart1 message. Does not implicitly {@link metamoto.messages.V2X.BsmPart1.verify|verify} messages.
                 * @param message BsmPart1 message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.messages.V2X.IBsmPart1, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified BsmPart1 message, length delimited. Does not implicitly {@link metamoto.messages.V2X.BsmPart1.verify|verify} messages.
                 * @param message BsmPart1 message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.messages.V2X.IBsmPart1, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a BsmPart1 message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns BsmPart1
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.V2X.BsmPart1;

                /**
                 * Decodes a BsmPart1 message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns BsmPart1
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.V2X.BsmPart1;

                /**
                 * Verifies a BsmPart1 message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a BsmPart1 message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns BsmPart1
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.messages.V2X.BsmPart1;

                /**
                 * Creates a plain object from a BsmPart1 message. Also converts values to other types if specified.
                 * @param message BsmPart1
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.messages.V2X.BsmPart1, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this BsmPart1 to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a PositionalAccuracy. */
            interface IPositionalAccuracy {

                /** PositionalAccuracy semiMajor */
                semiMajor?: (number|null);

                /** PositionalAccuracy semiMinor */
                semiMinor?: (number|null);

                /** PositionalAccuracy orientation */
                orientation?: (number|null);
            }

            /** Represents a PositionalAccuracy. */
            class PositionalAccuracy implements IPositionalAccuracy {

                /**
                 * Constructs a new PositionalAccuracy.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.messages.V2X.IPositionalAccuracy);

                /** PositionalAccuracy semiMajor. */
                public semiMajor: number;

                /** PositionalAccuracy semiMinor. */
                public semiMinor: number;

                /** PositionalAccuracy orientation. */
                public orientation: number;

                /**
                 * Creates a new PositionalAccuracy instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns PositionalAccuracy instance
                 */
                public static create(properties?: metamoto.messages.V2X.IPositionalAccuracy): metamoto.messages.V2X.PositionalAccuracy;

                /**
                 * Encodes the specified PositionalAccuracy message. Does not implicitly {@link metamoto.messages.V2X.PositionalAccuracy.verify|verify} messages.
                 * @param message PositionalAccuracy message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.messages.V2X.IPositionalAccuracy, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified PositionalAccuracy message, length delimited. Does not implicitly {@link metamoto.messages.V2X.PositionalAccuracy.verify|verify} messages.
                 * @param message PositionalAccuracy message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.messages.V2X.IPositionalAccuracy, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a PositionalAccuracy message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns PositionalAccuracy
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.V2X.PositionalAccuracy;

                /**
                 * Decodes a PositionalAccuracy message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns PositionalAccuracy
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.V2X.PositionalAccuracy;

                /**
                 * Verifies a PositionalAccuracy message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a PositionalAccuracy message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns PositionalAccuracy
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.messages.V2X.PositionalAccuracy;

                /**
                 * Creates a plain object from a PositionalAccuracy message. Also converts values to other types if specified.
                 * @param message PositionalAccuracy
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.messages.V2X.PositionalAccuracy, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this PositionalAccuracy to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            /** Properties of a BrakeSystemStatus. */
            interface IBrakeSystemStatus {

                /** BrakeSystemStatus wheelBrakes */
                wheelBrakes?: (metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus|null);

                /** BrakeSystemStatus traction */
                traction?: (metamoto.messages.V2X.BrakeSystemStatus.TractionControlState|null);

                /** BrakeSystemStatus abs */
                abs?: (metamoto.messages.V2X.BrakeSystemStatus.AntiLockBrakeStatus|null);

                /** BrakeSystemStatus scs */
                scs?: (metamoto.messages.V2X.BrakeSystemStatus.StabilityControlStatus|null);

                /** BrakeSystemStatus brakeBoost */
                brakeBoost?: (metamoto.messages.V2X.BrakeSystemStatus.BrakeBoostApplied|null);
            }

            /** Represents a BrakeSystemStatus. */
            class BrakeSystemStatus implements IBrakeSystemStatus {

                /**
                 * Constructs a new BrakeSystemStatus.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.messages.V2X.IBrakeSystemStatus);

                /** BrakeSystemStatus wheelBrakes. */
                public wheelBrakes?: (metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus|null);

                /** BrakeSystemStatus traction. */
                public traction: metamoto.messages.V2X.BrakeSystemStatus.TractionControlState;

                /** BrakeSystemStatus abs. */
                public abs: metamoto.messages.V2X.BrakeSystemStatus.AntiLockBrakeStatus;

                /** BrakeSystemStatus scs. */
                public scs: metamoto.messages.V2X.BrakeSystemStatus.StabilityControlStatus;

                /** BrakeSystemStatus brakeBoost. */
                public brakeBoost: metamoto.messages.V2X.BrakeSystemStatus.BrakeBoostApplied;

                /**
                 * Creates a new BrakeSystemStatus instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns BrakeSystemStatus instance
                 */
                public static create(properties?: metamoto.messages.V2X.IBrakeSystemStatus): metamoto.messages.V2X.BrakeSystemStatus;

                /**
                 * Encodes the specified BrakeSystemStatus message. Does not implicitly {@link metamoto.messages.V2X.BrakeSystemStatus.verify|verify} messages.
                 * @param message BrakeSystemStatus message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.messages.V2X.IBrakeSystemStatus, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified BrakeSystemStatus message, length delimited. Does not implicitly {@link metamoto.messages.V2X.BrakeSystemStatus.verify|verify} messages.
                 * @param message BrakeSystemStatus message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.messages.V2X.IBrakeSystemStatus, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a BrakeSystemStatus message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns BrakeSystemStatus
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.V2X.BrakeSystemStatus;

                /**
                 * Decodes a BrakeSystemStatus message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns BrakeSystemStatus
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.V2X.BrakeSystemStatus;

                /**
                 * Verifies a BrakeSystemStatus message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a BrakeSystemStatus message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns BrakeSystemStatus
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.messages.V2X.BrakeSystemStatus;

                /**
                 * Creates a plain object from a BrakeSystemStatus message. Also converts values to other types if specified.
                 * @param message BrakeSystemStatus
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.messages.V2X.BrakeSystemStatus, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this BrakeSystemStatus to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }

            namespace BrakeSystemStatus {

                /** Properties of a BrakeAppliedStatus. */
                interface IBrakeAppliedStatus {

                    /** BrakeAppliedStatus leftFront */
                    leftFront?: (boolean|null);

                    /** BrakeAppliedStatus leftRear */
                    leftRear?: (boolean|null);

                    /** BrakeAppliedStatus rightFront */
                    rightFront?: (boolean|null);

                    /** BrakeAppliedStatus rightRear */
                    rightRear?: (boolean|null);
                }

                /** Represents a BrakeAppliedStatus. */
                class BrakeAppliedStatus implements IBrakeAppliedStatus {

                    /**
                     * Constructs a new BrakeAppliedStatus.
                     * @param [properties] Properties to set
                     */
                    constructor(properties?: metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus);

                    /** BrakeAppliedStatus leftFront. */
                    public leftFront: boolean;

                    /** BrakeAppliedStatus leftRear. */
                    public leftRear: boolean;

                    /** BrakeAppliedStatus rightFront. */
                    public rightFront: boolean;

                    /** BrakeAppliedStatus rightRear. */
                    public rightRear: boolean;

                    /**
                     * Creates a new BrakeAppliedStatus instance using the specified properties.
                     * @param [properties] Properties to set
                     * @returns BrakeAppliedStatus instance
                     */
                    public static create(properties?: metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus): metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus;

                    /**
                     * Encodes the specified BrakeAppliedStatus message. Does not implicitly {@link metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.verify|verify} messages.
                     * @param message BrakeAppliedStatus message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encode(message: metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Encodes the specified BrakeAppliedStatus message, length delimited. Does not implicitly {@link metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus.verify|verify} messages.
                     * @param message BrakeAppliedStatus message or plain object to encode
                     * @param [writer] Writer to encode to
                     * @returns Writer
                     */
                    public static encodeDelimited(message: metamoto.messages.V2X.BrakeSystemStatus.IBrakeAppliedStatus, writer?: $protobuf.Writer): $protobuf.Writer;

                    /**
                     * Decodes a BrakeAppliedStatus message from the specified reader or buffer.
                     * @param reader Reader or buffer to decode from
                     * @param [length] Message length if known beforehand
                     * @returns BrakeAppliedStatus
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus;

                    /**
                     * Decodes a BrakeAppliedStatus message from the specified reader or buffer, length delimited.
                     * @param reader Reader or buffer to decode from
                     * @returns BrakeAppliedStatus
                     * @throws {Error} If the payload is not a reader or valid buffer
                     * @throws {$protobuf.util.ProtocolError} If required fields are missing
                     */
                    public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus;

                    /**
                     * Verifies a BrakeAppliedStatus message.
                     * @param message Plain object to verify
                     * @returns `null` if valid, otherwise the reason why it is not
                     */
                    public static verify(message: { [k: string]: any }): (string|null);

                    /**
                     * Creates a BrakeAppliedStatus message from a plain object. Also converts values to their respective internal types.
                     * @param object Plain object
                     * @returns BrakeAppliedStatus
                     */
                    public static fromObject(object: { [k: string]: any }): metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus;

                    /**
                     * Creates a plain object from a BrakeAppliedStatus message. Also converts values to other types if specified.
                     * @param message BrakeAppliedStatus
                     * @param [options] Conversion options
                     * @returns Plain object
                     */
                    public static toObject(message: metamoto.messages.V2X.BrakeSystemStatus.BrakeAppliedStatus, options?: $protobuf.IConversionOptions): { [k: string]: any };

                    /**
                     * Converts this BrakeAppliedStatus to JSON.
                     * @returns JSON object
                     */
                    public toJSON(): { [k: string]: any };
                }

                /** TractionControlState enum. */
                enum TractionControlState {
                    TRACTION_UNAVAILABLE = 0,
                    TRACTION_OFF = 1,
                    TRACTION_ON = 2,
                    TRACTION_ENGAGED = 3
                }

                /** AntiLockBrakeStatus enum. */
                enum AntiLockBrakeStatus {
                    ABS_UNAVAILABLE = 0,
                    ABS_OFF = 1,
                    ABS_ON = 2,
                    ABS_ENGAGED = 3
                }

                /** StabilityControlStatus enum. */
                enum StabilityControlStatus {
                    SC_UNAVAILABLE = 0,
                    SC_OFF = 1,
                    SC_ON = 2
                }

                /** BrakeBoostApplied enum. */
                enum BrakeBoostApplied {
                    BB_UNAVAILABLE = 0,
                    BB_OFF = 1,
                    BB_ON = 2
                }
            }
        }

        /** Properties of a VehicleControls. */
        interface IVehicleControls {

            /** VehicleControls steer */
            steer?: (google.protobuf.IFloatValue|null);

            /** VehicleControls throttle */
            throttle?: (google.protobuf.IFloatValue|null);

            /** VehicleControls brake */
            brake?: (google.protobuf.IFloatValue|null);

            /** VehicleControls gearSelector */
            gearSelector?: (metamoto.types.Vehicle.GearSelector|null);

            /** VehicleControls gear */
            gear?: (number|null);

            /** VehicleControls turnSignal */
            turnSignal?: (metamoto.types.Vehicle.SignalLightState|null);

            /** VehicleControls headLights */
            headLights?: (metamoto.types.Vehicle.LightState|null);

            /** VehicleControls acceleration */
            acceleration?: (google.protobuf.IFloatValue|null);

            /** VehicleControls wheelControls */
            wheelControls?: (metamoto.messages.VehicleControls.IWheelControl[]|null);
        }

        /** Represents a VehicleControls. */
        class VehicleControls implements IVehicleControls {

            /**
             * Constructs a new VehicleControls.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IVehicleControls);

            /** VehicleControls steer. */
            public steer?: (google.protobuf.IFloatValue|null);

            /** VehicleControls throttle. */
            public throttle?: (google.protobuf.IFloatValue|null);

            /** VehicleControls brake. */
            public brake?: (google.protobuf.IFloatValue|null);

            /** VehicleControls gearSelector. */
            public gearSelector: metamoto.types.Vehicle.GearSelector;

            /** VehicleControls gear. */
            public gear: number;

            /** VehicleControls turnSignal. */
            public turnSignal: metamoto.types.Vehicle.SignalLightState;

            /** VehicleControls headLights. */
            public headLights: metamoto.types.Vehicle.LightState;

            /** VehicleControls acceleration. */
            public acceleration?: (google.protobuf.IFloatValue|null);

            /** VehicleControls wheelControls. */
            public wheelControls: metamoto.messages.VehicleControls.IWheelControl[];

            /**
             * Creates a new VehicleControls instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VehicleControls instance
             */
            public static create(properties?: metamoto.messages.IVehicleControls): metamoto.messages.VehicleControls;

            /**
             * Encodes the specified VehicleControls message. Does not implicitly {@link metamoto.messages.VehicleControls.verify|verify} messages.
             * @param message VehicleControls message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IVehicleControls, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VehicleControls message, length delimited. Does not implicitly {@link metamoto.messages.VehicleControls.verify|verify} messages.
             * @param message VehicleControls message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IVehicleControls, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VehicleControls message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VehicleControls
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.VehicleControls;

            /**
             * Decodes a VehicleControls message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VehicleControls
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.VehicleControls;

            /**
             * Verifies a VehicleControls message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VehicleControls message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VehicleControls
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.VehicleControls;

            /**
             * Creates a plain object from a VehicleControls message. Also converts values to other types if specified.
             * @param message VehicleControls
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.VehicleControls, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VehicleControls to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace VehicleControls {

            /** Properties of a WheelControl. */
            interface IWheelControl {

                /** WheelControl angularVelocity */
                angularVelocity?: (google.protobuf.IFloatValue|null);

                /** WheelControl steerAngle */
                steerAngle?: (google.protobuf.IFloatValue|null);
            }

            /** Represents a WheelControl. */
            class WheelControl implements IWheelControl {

                /**
                 * Constructs a new WheelControl.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.messages.VehicleControls.IWheelControl);

                /** WheelControl angularVelocity. */
                public angularVelocity?: (google.protobuf.IFloatValue|null);

                /** WheelControl steerAngle. */
                public steerAngle?: (google.protobuf.IFloatValue|null);

                /**
                 * Creates a new WheelControl instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns WheelControl instance
                 */
                public static create(properties?: metamoto.messages.VehicleControls.IWheelControl): metamoto.messages.VehicleControls.WheelControl;

                /**
                 * Encodes the specified WheelControl message. Does not implicitly {@link metamoto.messages.VehicleControls.WheelControl.verify|verify} messages.
                 * @param message WheelControl message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.messages.VehicleControls.IWheelControl, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified WheelControl message, length delimited. Does not implicitly {@link metamoto.messages.VehicleControls.WheelControl.verify|verify} messages.
                 * @param message WheelControl message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.messages.VehicleControls.IWheelControl, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a WheelControl message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns WheelControl
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.VehicleControls.WheelControl;

                /**
                 * Decodes a WheelControl message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns WheelControl
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.VehicleControls.WheelControl;

                /**
                 * Verifies a WheelControl message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a WheelControl message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns WheelControl
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.messages.VehicleControls.WheelControl;

                /**
                 * Creates a plain object from a WheelControl message. Also converts values to other types if specified.
                 * @param message WheelControl
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.messages.VehicleControls.WheelControl, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this WheelControl to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a VehicleState. */
        interface IVehicleState {

            /** VehicleState pose */
            pose?: (metamoto.types.IPose|null);

            /** VehicleState velocity */
            velocity?: (metamoto.types.IVelocity|null);

            /** VehicleState acceleration */
            acceleration?: (metamoto.types.IAcceleration|null);

            /** VehicleState roadPoint */
            roadPoint?: (metamoto.types.IRoadPoint[]|null);

            /** VehicleState steerAngle */
            steerAngle?: (number|null);

            /** VehicleState throttle */
            throttle?: (number|null);

            /** VehicleState brake */
            brake?: (number|null);

            /** VehicleState speed */
            speed?: (number|null);

            /** VehicleState gearSelector */
            gearSelector?: (metamoto.types.Vehicle.GearSelector|null);

            /** VehicleState gear */
            gear?: (number|null);

            /** VehicleState rpm */
            rpm?: (number|null);

            /** VehicleState turnSignal */
            turnSignal?: (metamoto.types.Vehicle.SignalLightState|null);

            /** VehicleState headLights */
            headLights?: (metamoto.types.Vehicle.LightState|null);

            /** VehicleState wheels */
            wheels?: (metamoto.messages.VehicleState.IWheelState[]|null);
        }

        /** Represents a VehicleState. */
        class VehicleState implements IVehicleState {

            /**
             * Constructs a new VehicleState.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IVehicleState);

            /** VehicleState pose. */
            public pose?: (metamoto.types.IPose|null);

            /** VehicleState velocity. */
            public velocity?: (metamoto.types.IVelocity|null);

            /** VehicleState acceleration. */
            public acceleration?: (metamoto.types.IAcceleration|null);

            /** VehicleState roadPoint. */
            public roadPoint: metamoto.types.IRoadPoint[];

            /** VehicleState steerAngle. */
            public steerAngle: number;

            /** VehicleState throttle. */
            public throttle: number;

            /** VehicleState brake. */
            public brake: number;

            /** VehicleState speed. */
            public speed: number;

            /** VehicleState gearSelector. */
            public gearSelector: metamoto.types.Vehicle.GearSelector;

            /** VehicleState gear. */
            public gear: number;

            /** VehicleState rpm. */
            public rpm: number;

            /** VehicleState turnSignal. */
            public turnSignal: metamoto.types.Vehicle.SignalLightState;

            /** VehicleState headLights. */
            public headLights: metamoto.types.Vehicle.LightState;

            /** VehicleState wheels. */
            public wheels: metamoto.messages.VehicleState.IWheelState[];

            /**
             * Creates a new VehicleState instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VehicleState instance
             */
            public static create(properties?: metamoto.messages.IVehicleState): metamoto.messages.VehicleState;

            /**
             * Encodes the specified VehicleState message. Does not implicitly {@link metamoto.messages.VehicleState.verify|verify} messages.
             * @param message VehicleState message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IVehicleState, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VehicleState message, length delimited. Does not implicitly {@link metamoto.messages.VehicleState.verify|verify} messages.
             * @param message VehicleState message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IVehicleState, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VehicleState message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VehicleState
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.VehicleState;

            /**
             * Decodes a VehicleState message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VehicleState
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.VehicleState;

            /**
             * Verifies a VehicleState message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VehicleState message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VehicleState
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.VehicleState;

            /**
             * Creates a plain object from a VehicleState message. Also converts values to other types if specified.
             * @param message VehicleState
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.VehicleState, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VehicleState to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        namespace VehicleState {

            /** Properties of a WheelState. */
            interface IWheelState {

                /** WheelState angularVelocity */
                angularVelocity?: (number|null);

                /** WheelState steerAngle */
                steerAngle?: (number|null);
            }

            /** Represents a WheelState. */
            class WheelState implements IWheelState {

                /**
                 * Constructs a new WheelState.
                 * @param [properties] Properties to set
                 */
                constructor(properties?: metamoto.messages.VehicleState.IWheelState);

                /** WheelState angularVelocity. */
                public angularVelocity: number;

                /** WheelState steerAngle. */
                public steerAngle: number;

                /**
                 * Creates a new WheelState instance using the specified properties.
                 * @param [properties] Properties to set
                 * @returns WheelState instance
                 */
                public static create(properties?: metamoto.messages.VehicleState.IWheelState): metamoto.messages.VehicleState.WheelState;

                /**
                 * Encodes the specified WheelState message. Does not implicitly {@link metamoto.messages.VehicleState.WheelState.verify|verify} messages.
                 * @param message WheelState message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encode(message: metamoto.messages.VehicleState.IWheelState, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Encodes the specified WheelState message, length delimited. Does not implicitly {@link metamoto.messages.VehicleState.WheelState.verify|verify} messages.
                 * @param message WheelState message or plain object to encode
                 * @param [writer] Writer to encode to
                 * @returns Writer
                 */
                public static encodeDelimited(message: metamoto.messages.VehicleState.IWheelState, writer?: $protobuf.Writer): $protobuf.Writer;

                /**
                 * Decodes a WheelState message from the specified reader or buffer.
                 * @param reader Reader or buffer to decode from
                 * @param [length] Message length if known beforehand
                 * @returns WheelState
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.VehicleState.WheelState;

                /**
                 * Decodes a WheelState message from the specified reader or buffer, length delimited.
                 * @param reader Reader or buffer to decode from
                 * @returns WheelState
                 * @throws {Error} If the payload is not a reader or valid buffer
                 * @throws {$protobuf.util.ProtocolError} If required fields are missing
                 */
                public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.VehicleState.WheelState;

                /**
                 * Verifies a WheelState message.
                 * @param message Plain object to verify
                 * @returns `null` if valid, otherwise the reason why it is not
                 */
                public static verify(message: { [k: string]: any }): (string|null);

                /**
                 * Creates a WheelState message from a plain object. Also converts values to their respective internal types.
                 * @param object Plain object
                 * @returns WheelState
                 */
                public static fromObject(object: { [k: string]: any }): metamoto.messages.VehicleState.WheelState;

                /**
                 * Creates a plain object from a WheelState message. Also converts values to other types if specified.
                 * @param message WheelState
                 * @param [options] Conversion options
                 * @returns Plain object
                 */
                public static toObject(message: metamoto.messages.VehicleState.WheelState, options?: $protobuf.IConversionOptions): { [k: string]: any };

                /**
                 * Converts this WheelState to JSON.
                 * @returns JSON object
                 */
                public toJSON(): { [k: string]: any };
            }
        }

        /** Properties of a VisualizationList. */
        interface IVisualizationList {

            /** VisualizationList visualMessages */
            visualMessages?: (metamoto.messages.IVisualization[]|null);
        }

        /** Represents a VisualizationList. */
        class VisualizationList implements IVisualizationList {

            /**
             * Constructs a new VisualizationList.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IVisualizationList);

            /** VisualizationList visualMessages. */
            public visualMessages: metamoto.messages.IVisualization[];

            /**
             * Creates a new VisualizationList instance using the specified properties.
             * @param [properties] Properties to set
             * @returns VisualizationList instance
             */
            public static create(properties?: metamoto.messages.IVisualizationList): metamoto.messages.VisualizationList;

            /**
             * Encodes the specified VisualizationList message. Does not implicitly {@link metamoto.messages.VisualizationList.verify|verify} messages.
             * @param message VisualizationList message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IVisualizationList, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified VisualizationList message, length delimited. Does not implicitly {@link metamoto.messages.VisualizationList.verify|verify} messages.
             * @param message VisualizationList message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IVisualizationList, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a VisualizationList message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns VisualizationList
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.VisualizationList;

            /**
             * Decodes a VisualizationList message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns VisualizationList
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.VisualizationList;

            /**
             * Verifies a VisualizationList message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a VisualizationList message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns VisualizationList
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.VisualizationList;

            /**
             * Creates a plain object from a VisualizationList message. Also converts values to other types if specified.
             * @param message VisualizationList
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.VisualizationList, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this VisualizationList to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Visualization. */
        interface IVisualization {

            /** Visualization time */
            time?: (number|null);

            /** Visualization frame */
            frame?: (metamoto.types.ReferenceFrame|null);

            /** Visualization box */
            box?: (metamoto.types.IBoundingBox|null);

            /** Visualization path */
            path?: (metamoto.types.IVisualPath|null);

            /** Visualization label */
            label?: (string|null);

            /** Visualization description */
            description?: (string|null);

            /** Visualization duration */
            duration?: (number|null);
        }

        /** Represents a Visualization. */
        class Visualization implements IVisualization {

            /**
             * Constructs a new Visualization.
             * @param [properties] Properties to set
             */
            constructor(properties?: metamoto.messages.IVisualization);

            /** Visualization time. */
            public time: number;

            /** Visualization frame. */
            public frame: metamoto.types.ReferenceFrame;

            /** Visualization box. */
            public box?: (metamoto.types.IBoundingBox|null);

            /** Visualization path. */
            public path?: (metamoto.types.IVisualPath|null);

            /** Visualization label. */
            public label: string;

            /** Visualization description. */
            public description: string;

            /** Visualization duration. */
            public duration: number;

            /** Visualization pathType. */
            public pathType?: ("box"|"path");

            /**
             * Creates a new Visualization instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Visualization instance
             */
            public static create(properties?: metamoto.messages.IVisualization): metamoto.messages.Visualization;

            /**
             * Encodes the specified Visualization message. Does not implicitly {@link metamoto.messages.Visualization.verify|verify} messages.
             * @param message Visualization message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: metamoto.messages.IVisualization, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Visualization message, length delimited. Does not implicitly {@link metamoto.messages.Visualization.verify|verify} messages.
             * @param message Visualization message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: metamoto.messages.IVisualization, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Visualization message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Visualization
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): metamoto.messages.Visualization;

            /**
             * Decodes a Visualization message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Visualization
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): metamoto.messages.Visualization;

            /**
             * Verifies a Visualization message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Visualization message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Visualization
             */
            public static fromObject(object: { [k: string]: any }): metamoto.messages.Visualization;

            /**
             * Creates a plain object from a Visualization message. Also converts values to other types if specified.
             * @param message Visualization
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: metamoto.messages.Visualization, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Visualization to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }
    }
}

/** Namespace google. */
export namespace google {

    /** Namespace protobuf. */
    namespace protobuf {

        /** Properties of a Struct. */
        interface IStruct {

            /** Struct fields */
            fields?: ({ [k: string]: google.protobuf.IValue }|null);
        }

        /** Represents a Struct. */
        class Struct implements IStruct {

            /**
             * Constructs a new Struct.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IStruct);

            /** Struct fields. */
            public fields: { [k: string]: google.protobuf.IValue };

            /**
             * Creates a new Struct instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Struct instance
             */
            public static create(properties?: google.protobuf.IStruct): google.protobuf.Struct;

            /**
             * Encodes the specified Struct message. Does not implicitly {@link google.protobuf.Struct.verify|verify} messages.
             * @param message Struct message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IStruct, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Struct message, length delimited. Does not implicitly {@link google.protobuf.Struct.verify|verify} messages.
             * @param message Struct message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IStruct, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Struct message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Struct
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.Struct;

            /**
             * Decodes a Struct message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Struct
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.Struct;

            /**
             * Verifies a Struct message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Struct message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Struct
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.Struct;

            /**
             * Creates a plain object from a Struct message. Also converts values to other types if specified.
             * @param message Struct
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.Struct, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Struct to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a Value. */
        interface IValue {

            /** Value nullValue */
            nullValue?: (google.protobuf.NullValue|null);

            /** Value numberValue */
            numberValue?: (number|null);

            /** Value stringValue */
            stringValue?: (string|null);

            /** Value boolValue */
            boolValue?: (boolean|null);

            /** Value structValue */
            structValue?: (google.protobuf.IStruct|null);

            /** Value listValue */
            listValue?: (google.protobuf.IListValue|null);
        }

        /** Represents a Value. */
        class Value implements IValue {

            /**
             * Constructs a new Value.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IValue);

            /** Value nullValue. */
            public nullValue: google.protobuf.NullValue;

            /** Value numberValue. */
            public numberValue: number;

            /** Value stringValue. */
            public stringValue: string;

            /** Value boolValue. */
            public boolValue: boolean;

            /** Value structValue. */
            public structValue?: (google.protobuf.IStruct|null);

            /** Value listValue. */
            public listValue?: (google.protobuf.IListValue|null);

            /** Value kind. */
            public kind?: ("nullValue"|"numberValue"|"stringValue"|"boolValue"|"structValue"|"listValue");

            /**
             * Creates a new Value instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Value instance
             */
            public static create(properties?: google.protobuf.IValue): google.protobuf.Value;

            /**
             * Encodes the specified Value message. Does not implicitly {@link google.protobuf.Value.verify|verify} messages.
             * @param message Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Value message, length delimited. Does not implicitly {@link google.protobuf.Value.verify|verify} messages.
             * @param message Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Value message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.Value;

            /**
             * Decodes a Value message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.Value;

            /**
             * Verifies a Value message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Value message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Value
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.Value;

            /**
             * Creates a plain object from a Value message. Also converts values to other types if specified.
             * @param message Value
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.Value, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Value to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** NullValue enum. */
        enum NullValue {
            NULL_VALUE = 0
        }

        /** Properties of a ListValue. */
        interface IListValue {

            /** ListValue values */
            values?: (google.protobuf.IValue[]|null);
        }

        /** Represents a ListValue. */
        class ListValue implements IListValue {

            /**
             * Constructs a new ListValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IListValue);

            /** ListValue values. */
            public values: google.protobuf.IValue[];

            /**
             * Creates a new ListValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns ListValue instance
             */
            public static create(properties?: google.protobuf.IListValue): google.protobuf.ListValue;

            /**
             * Encodes the specified ListValue message. Does not implicitly {@link google.protobuf.ListValue.verify|verify} messages.
             * @param message ListValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IListValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified ListValue message, length delimited. Does not implicitly {@link google.protobuf.ListValue.verify|verify} messages.
             * @param message ListValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IListValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a ListValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns ListValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.ListValue;

            /**
             * Decodes a ListValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns ListValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.ListValue;

            /**
             * Verifies a ListValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a ListValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns ListValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.ListValue;

            /**
             * Creates a plain object from a ListValue message. Also converts values to other types if specified.
             * @param message ListValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.ListValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this ListValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a DoubleValue. */
        interface IDoubleValue {

            /** DoubleValue value */
            value?: (number|null);
        }

        /** Represents a DoubleValue. */
        class DoubleValue implements IDoubleValue {

            /**
             * Constructs a new DoubleValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IDoubleValue);

            /** DoubleValue value. */
            public value: number;

            /**
             * Creates a new DoubleValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns DoubleValue instance
             */
            public static create(properties?: google.protobuf.IDoubleValue): google.protobuf.DoubleValue;

            /**
             * Encodes the specified DoubleValue message. Does not implicitly {@link google.protobuf.DoubleValue.verify|verify} messages.
             * @param message DoubleValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IDoubleValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified DoubleValue message, length delimited. Does not implicitly {@link google.protobuf.DoubleValue.verify|verify} messages.
             * @param message DoubleValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IDoubleValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a DoubleValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns DoubleValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.DoubleValue;

            /**
             * Decodes a DoubleValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns DoubleValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.DoubleValue;

            /**
             * Verifies a DoubleValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a DoubleValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns DoubleValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.DoubleValue;

            /**
             * Creates a plain object from a DoubleValue message. Also converts values to other types if specified.
             * @param message DoubleValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.DoubleValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this DoubleValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a FloatValue. */
        interface IFloatValue {

            /** FloatValue value */
            value?: (number|null);
        }

        /** Represents a FloatValue. */
        class FloatValue implements IFloatValue {

            /**
             * Constructs a new FloatValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IFloatValue);

            /** FloatValue value. */
            public value: number;

            /**
             * Creates a new FloatValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns FloatValue instance
             */
            public static create(properties?: google.protobuf.IFloatValue): google.protobuf.FloatValue;

            /**
             * Encodes the specified FloatValue message. Does not implicitly {@link google.protobuf.FloatValue.verify|verify} messages.
             * @param message FloatValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IFloatValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified FloatValue message, length delimited. Does not implicitly {@link google.protobuf.FloatValue.verify|verify} messages.
             * @param message FloatValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IFloatValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a FloatValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns FloatValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.FloatValue;

            /**
             * Decodes a FloatValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns FloatValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.FloatValue;

            /**
             * Verifies a FloatValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a FloatValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns FloatValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.FloatValue;

            /**
             * Creates a plain object from a FloatValue message. Also converts values to other types if specified.
             * @param message FloatValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.FloatValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this FloatValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Int64Value. */
        interface IInt64Value {

            /** Int64Value value */
            value?: (number|Long|null);
        }

        /** Represents an Int64Value. */
        class Int64Value implements IInt64Value {

            /**
             * Constructs a new Int64Value.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IInt64Value);

            /** Int64Value value. */
            public value: (number|Long);

            /**
             * Creates a new Int64Value instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Int64Value instance
             */
            public static create(properties?: google.protobuf.IInt64Value): google.protobuf.Int64Value;

            /**
             * Encodes the specified Int64Value message. Does not implicitly {@link google.protobuf.Int64Value.verify|verify} messages.
             * @param message Int64Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IInt64Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Int64Value message, length delimited. Does not implicitly {@link google.protobuf.Int64Value.verify|verify} messages.
             * @param message Int64Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IInt64Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Int64Value message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Int64Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.Int64Value;

            /**
             * Decodes an Int64Value message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Int64Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.Int64Value;

            /**
             * Verifies an Int64Value message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Int64Value message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Int64Value
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.Int64Value;

            /**
             * Creates a plain object from an Int64Value message. Also converts values to other types if specified.
             * @param message Int64Value
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.Int64Value, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Int64Value to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a UInt64Value. */
        interface IUInt64Value {

            /** UInt64Value value */
            value?: (number|Long|null);
        }

        /** Represents a UInt64Value. */
        class UInt64Value implements IUInt64Value {

            /**
             * Constructs a new UInt64Value.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IUInt64Value);

            /** UInt64Value value. */
            public value: (number|Long);

            /**
             * Creates a new UInt64Value instance using the specified properties.
             * @param [properties] Properties to set
             * @returns UInt64Value instance
             */
            public static create(properties?: google.protobuf.IUInt64Value): google.protobuf.UInt64Value;

            /**
             * Encodes the specified UInt64Value message. Does not implicitly {@link google.protobuf.UInt64Value.verify|verify} messages.
             * @param message UInt64Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IUInt64Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified UInt64Value message, length delimited. Does not implicitly {@link google.protobuf.UInt64Value.verify|verify} messages.
             * @param message UInt64Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IUInt64Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a UInt64Value message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns UInt64Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.UInt64Value;

            /**
             * Decodes a UInt64Value message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns UInt64Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.UInt64Value;

            /**
             * Verifies a UInt64Value message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a UInt64Value message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns UInt64Value
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.UInt64Value;

            /**
             * Creates a plain object from a UInt64Value message. Also converts values to other types if specified.
             * @param message UInt64Value
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.UInt64Value, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this UInt64Value to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Int32Value. */
        interface IInt32Value {

            /** Int32Value value */
            value?: (number|null);
        }

        /** Represents an Int32Value. */
        class Int32Value implements IInt32Value {

            /**
             * Constructs a new Int32Value.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IInt32Value);

            /** Int32Value value. */
            public value: number;

            /**
             * Creates a new Int32Value instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Int32Value instance
             */
            public static create(properties?: google.protobuf.IInt32Value): google.protobuf.Int32Value;

            /**
             * Encodes the specified Int32Value message. Does not implicitly {@link google.protobuf.Int32Value.verify|verify} messages.
             * @param message Int32Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IInt32Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Int32Value message, length delimited. Does not implicitly {@link google.protobuf.Int32Value.verify|verify} messages.
             * @param message Int32Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IInt32Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Int32Value message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Int32Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.Int32Value;

            /**
             * Decodes an Int32Value message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Int32Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.Int32Value;

            /**
             * Verifies an Int32Value message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Int32Value message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Int32Value
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.Int32Value;

            /**
             * Creates a plain object from an Int32Value message. Also converts values to other types if specified.
             * @param message Int32Value
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.Int32Value, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Int32Value to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a UInt32Value. */
        interface IUInt32Value {

            /** UInt32Value value */
            value?: (number|null);
        }

        /** Represents a UInt32Value. */
        class UInt32Value implements IUInt32Value {

            /**
             * Constructs a new UInt32Value.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IUInt32Value);

            /** UInt32Value value. */
            public value: number;

            /**
             * Creates a new UInt32Value instance using the specified properties.
             * @param [properties] Properties to set
             * @returns UInt32Value instance
             */
            public static create(properties?: google.protobuf.IUInt32Value): google.protobuf.UInt32Value;

            /**
             * Encodes the specified UInt32Value message. Does not implicitly {@link google.protobuf.UInt32Value.verify|verify} messages.
             * @param message UInt32Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IUInt32Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified UInt32Value message, length delimited. Does not implicitly {@link google.protobuf.UInt32Value.verify|verify} messages.
             * @param message UInt32Value message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IUInt32Value, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a UInt32Value message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns UInt32Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.UInt32Value;

            /**
             * Decodes a UInt32Value message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns UInt32Value
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.UInt32Value;

            /**
             * Verifies a UInt32Value message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a UInt32Value message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns UInt32Value
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.UInt32Value;

            /**
             * Creates a plain object from a UInt32Value message. Also converts values to other types if specified.
             * @param message UInt32Value
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.UInt32Value, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this UInt32Value to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a BoolValue. */
        interface IBoolValue {

            /** BoolValue value */
            value?: (boolean|null);
        }

        /** Represents a BoolValue. */
        class BoolValue implements IBoolValue {

            /**
             * Constructs a new BoolValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IBoolValue);

            /** BoolValue value. */
            public value: boolean;

            /**
             * Creates a new BoolValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns BoolValue instance
             */
            public static create(properties?: google.protobuf.IBoolValue): google.protobuf.BoolValue;

            /**
             * Encodes the specified BoolValue message. Does not implicitly {@link google.protobuf.BoolValue.verify|verify} messages.
             * @param message BoolValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IBoolValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified BoolValue message, length delimited. Does not implicitly {@link google.protobuf.BoolValue.verify|verify} messages.
             * @param message BoolValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IBoolValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a BoolValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns BoolValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.BoolValue;

            /**
             * Decodes a BoolValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns BoolValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.BoolValue;

            /**
             * Verifies a BoolValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a BoolValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns BoolValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.BoolValue;

            /**
             * Creates a plain object from a BoolValue message. Also converts values to other types if specified.
             * @param message BoolValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.BoolValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this BoolValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a StringValue. */
        interface IStringValue {

            /** StringValue value */
            value?: (string|null);
        }

        /** Represents a StringValue. */
        class StringValue implements IStringValue {

            /**
             * Constructs a new StringValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IStringValue);

            /** StringValue value. */
            public value: string;

            /**
             * Creates a new StringValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns StringValue instance
             */
            public static create(properties?: google.protobuf.IStringValue): google.protobuf.StringValue;

            /**
             * Encodes the specified StringValue message. Does not implicitly {@link google.protobuf.StringValue.verify|verify} messages.
             * @param message StringValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IStringValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified StringValue message, length delimited. Does not implicitly {@link google.protobuf.StringValue.verify|verify} messages.
             * @param message StringValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IStringValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a StringValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns StringValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.StringValue;

            /**
             * Decodes a StringValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns StringValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.StringValue;

            /**
             * Verifies a StringValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a StringValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns StringValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.StringValue;

            /**
             * Creates a plain object from a StringValue message. Also converts values to other types if specified.
             * @param message StringValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.StringValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this StringValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of a BytesValue. */
        interface IBytesValue {

            /** BytesValue value */
            value?: (Uint8Array|null);
        }

        /** Represents a BytesValue. */
        class BytesValue implements IBytesValue {

            /**
             * Constructs a new BytesValue.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IBytesValue);

            /** BytesValue value. */
            public value: Uint8Array;

            /**
             * Creates a new BytesValue instance using the specified properties.
             * @param [properties] Properties to set
             * @returns BytesValue instance
             */
            public static create(properties?: google.protobuf.IBytesValue): google.protobuf.BytesValue;

            /**
             * Encodes the specified BytesValue message. Does not implicitly {@link google.protobuf.BytesValue.verify|verify} messages.
             * @param message BytesValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IBytesValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified BytesValue message, length delimited. Does not implicitly {@link google.protobuf.BytesValue.verify|verify} messages.
             * @param message BytesValue message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IBytesValue, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a BytesValue message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns BytesValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.BytesValue;

            /**
             * Decodes a BytesValue message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns BytesValue
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.BytesValue;

            /**
             * Verifies a BytesValue message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a BytesValue message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns BytesValue
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.BytesValue;

            /**
             * Creates a plain object from a BytesValue message. Also converts values to other types if specified.
             * @param message BytesValue
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.BytesValue, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this BytesValue to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }

        /** Properties of an Any. */
        interface IAny {

            /** Any type_url */
            type_url?: (string|null);

            /** Any value */
            value?: (Uint8Array|null);
        }

        /** Represents an Any. */
        class Any implements IAny {

            /**
             * Constructs a new Any.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.protobuf.IAny);

            /** Any type_url. */
            public type_url: string;

            /** Any value. */
            public value: Uint8Array;

            /**
             * Creates a new Any instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Any instance
             */
            public static create(properties?: google.protobuf.IAny): google.protobuf.Any;

            /**
             * Encodes the specified Any message. Does not implicitly {@link google.protobuf.Any.verify|verify} messages.
             * @param message Any message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.protobuf.IAny, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Any message, length delimited. Does not implicitly {@link google.protobuf.Any.verify|verify} messages.
             * @param message Any message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.protobuf.IAny, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes an Any message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Any
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.protobuf.Any;

            /**
             * Decodes an Any message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Any
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.protobuf.Any;

            /**
             * Verifies an Any message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates an Any message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Any
             */
            public static fromObject(object: { [k: string]: any }): google.protobuf.Any;

            /**
             * Creates a plain object from an Any message. Also converts values to other types if specified.
             * @param message Any
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.protobuf.Any, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Any to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }
    }

    /** Namespace rpc. */
    namespace rpc {

        /** Properties of a Status. */
        interface IStatus {

            /** Status code */
            code?: (number|null);

            /** Status message */
            message?: (string|null);

            /** Status details */
            details?: (google.protobuf.IAny[]|null);
        }

        /** Represents a Status. */
        class Status implements IStatus {

            /**
             * Constructs a new Status.
             * @param [properties] Properties to set
             */
            constructor(properties?: google.rpc.IStatus);

            /** Status code. */
            public code: number;

            /** Status message. */
            public message: string;

            /** Status details. */
            public details: google.protobuf.IAny[];

            /**
             * Creates a new Status instance using the specified properties.
             * @param [properties] Properties to set
             * @returns Status instance
             */
            public static create(properties?: google.rpc.IStatus): google.rpc.Status;

            /**
             * Encodes the specified Status message. Does not implicitly {@link google.rpc.Status.verify|verify} messages.
             * @param message Status message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encode(message: google.rpc.IStatus, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Encodes the specified Status message, length delimited. Does not implicitly {@link google.rpc.Status.verify|verify} messages.
             * @param message Status message or plain object to encode
             * @param [writer] Writer to encode to
             * @returns Writer
             */
            public static encodeDelimited(message: google.rpc.IStatus, writer?: $protobuf.Writer): $protobuf.Writer;

            /**
             * Decodes a Status message from the specified reader or buffer.
             * @param reader Reader or buffer to decode from
             * @param [length] Message length if known beforehand
             * @returns Status
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decode(reader: ($protobuf.Reader|Uint8Array), length?: number): google.rpc.Status;

            /**
             * Decodes a Status message from the specified reader or buffer, length delimited.
             * @param reader Reader or buffer to decode from
             * @returns Status
             * @throws {Error} If the payload is not a reader or valid buffer
             * @throws {$protobuf.util.ProtocolError} If required fields are missing
             */
            public static decodeDelimited(reader: ($protobuf.Reader|Uint8Array)): google.rpc.Status;

            /**
             * Verifies a Status message.
             * @param message Plain object to verify
             * @returns `null` if valid, otherwise the reason why it is not
             */
            public static verify(message: { [k: string]: any }): (string|null);

            /**
             * Creates a Status message from a plain object. Also converts values to their respective internal types.
             * @param object Plain object
             * @returns Status
             */
            public static fromObject(object: { [k: string]: any }): google.rpc.Status;

            /**
             * Creates a plain object from a Status message. Also converts values to other types if specified.
             * @param message Status
             * @param [options] Conversion options
             * @returns Plain object
             */
            public static toObject(message: google.rpc.Status, options?: $protobuf.IConversionOptions): { [k: string]: any };

            /**
             * Converts this Status to JSON.
             * @returns JSON object
             */
            public toJSON(): { [k: string]: any };
        }
    }
}
