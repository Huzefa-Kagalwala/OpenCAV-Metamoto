classdef RadarTrackArray < ros.Message
    %RadarTrackArray MATLAB implementation of radar_msgs/RadarTrackArray
    %   This class was automatically generated by
    %   ros.msg.internal.gen.MessageClassGenerator.
    
    %   Copyright 2014-2020 The MathWorks, Inc.
    
    %#ok<*INUSD>
    
    properties (Constant)
        MessageType = 'radar_msgs/RadarTrackArray' % The ROS message type
    end
    
    properties (Constant, Hidden)
        MD5Checksum = '49d8549010f0f446ea46ca97a1099cba' % The MD5 Checksum of the message definition
    end
    
    properties (Access = protected)
        JavaMessage % The Java message object
    end
    
    properties (Constant, Access = protected)
        RadarMsgsRadarTrackClass = ros.msg.internal.MessageFactory.getClassForType('radar_msgs/RadarTrack') % Dispatch to MATLAB class for message type radar_msgs/RadarTrack
        StdMsgsHeaderClass = ros.msg.internal.MessageFactory.getClassForType('std_msgs/Header') % Dispatch to MATLAB class for message type std_msgs/Header
    end
    
    properties (Dependent)
        Header
        Tracks
    end
    
    properties (Access = protected)
        Cache = struct('Header', [], 'Tracks', []) % The cache for fast data access
    end
    
    properties (Constant, Hidden)
        PropertyList = {'Header', 'Tracks'} % List of non-constant message properties
        ROSPropertyList = {'header', 'tracks'} % List of non-constant ROS message properties
    end
    
    methods
        function obj = RadarTrackArray(msg)
            %RadarTrackArray Construct the message object RadarTrackArray
            import com.mathworks.toolbox.ros.message.MessageInfo;
            
            % Support default constructor
            if nargin == 0
                obj.JavaMessage = obj.createNewJavaMessage;
                return;
            end
            
            % Construct appropriate empty array
            if isempty(msg)
                obj = obj.empty(0,1);
                return;
            end
            
            % Make scalar construction fast
            if isscalar(msg)
                % Check for correct input class
                if ~MessageInfo.compareTypes(msg(1), obj.MessageType)
                    error(message('ros:mlros:message:NoTypeMatch', obj.MessageType, ...
                        char(MessageInfo.getType(msg(1))) ));
                end
                obj.JavaMessage = msg(1);
                return;
            end
            
            % Check that this is a vector of scalar messages. Since this
            % is an object array, use arrayfun to verify.
            if ~all(arrayfun(@isscalar, msg))
                error(message('ros:mlros:message:MessageArraySizeError'));
            end
            
            % Check that all messages in the array have the correct type
            if ~all(arrayfun(@(x) MessageInfo.compareTypes(x, obj.MessageType), msg))
                error(message('ros:mlros:message:NoTypeMatchArray', obj.MessageType));
            end
            
            % Construct array of objects if necessary
            objType = class(obj);
            for i = 1:length(msg)
                obj(i,1) = feval(objType, msg(i)); %#ok<AGROW>
            end
        end
        
        function header = get.Header(obj)
            %get.Header Get the value for property Header
            if isempty(obj.Cache.Header)
                obj.Cache.Header = feval(obj.StdMsgsHeaderClass, obj.JavaMessage.getHeader);
            end
            header = obj.Cache.Header;
        end
        
        function set.Header(obj, header)
            %set.Header Set the value for property Header
            validateattributes(header, {obj.StdMsgsHeaderClass}, {'nonempty', 'scalar'}, 'RadarTrackArray', 'Header');
            
            obj.JavaMessage.setHeader(header.getJavaObject);
            
            % Update cache if necessary
            if ~isempty(obj.Cache.Header)
                obj.Cache.Header.setJavaObject(header.getJavaObject);
            end
        end
        
        function tracks = get.Tracks(obj)
            %get.Tracks Get the value for property Tracks
            if isempty(obj.Cache.Tracks)
                javaArray = obj.JavaMessage.getTracks;
                array = obj.readJavaArray(javaArray, obj.RadarMsgsRadarTrackClass);
                obj.Cache.Tracks = feval(obj.RadarMsgsRadarTrackClass, array);
            end
            tracks = obj.Cache.Tracks;
        end
        
        function set.Tracks(obj, tracks)
            %set.Tracks Set the value for property Tracks
            if ~isvector(tracks) && isempty(tracks)
                % Allow empty [] input
                tracks = feval([obj.RadarMsgsRadarTrackClass '.empty'], 0, 1);
            end
            
            validateattributes(tracks, {obj.RadarMsgsRadarTrackClass}, {'vector'}, 'RadarTrackArray', 'Tracks');
            
            javaArray = obj.JavaMessage.getTracks;
            array = obj.writeJavaArray(tracks, javaArray, obj.RadarMsgsRadarTrackClass);
            obj.JavaMessage.setTracks(array);
            
            % Update cache if necessary
            if ~isempty(obj.Cache.Tracks)
                obj.Cache.Tracks = [];
                obj.Cache.Tracks = obj.Tracks;
            end
        end
    end
    
    methods (Access = protected)
        function resetCache(obj)
            %resetCache Resets any cached properties
            obj.Cache.Header = [];
            obj.Cache.Tracks = [];
        end
        
        function cpObj = copyElement(obj)
            %copyElement Implements deep copy behavior for message
            
            % Call default copy method for shallow copy
            cpObj = copyElement@ros.Message(obj);
            
            % Clear any existing cached properties
            cpObj.resetCache;
            
            % Create a new Java message object
            cpObj.JavaMessage = obj.createNewJavaMessage;
            
            % Recursively copy compound properties
            cpObj.Header = copy(obj.Header);
            cpObj.Tracks = copy(obj.Tracks);
        end
        
        function reload(obj, strObj)
            %reload Called by loadobj to assign properties
            obj.Header = feval([obj.StdMsgsHeaderClass '.loadobj'], strObj.Header);
            TracksCell = arrayfun(@(x) feval([obj.RadarMsgsRadarTrackClass '.loadobj'], x), strObj.Tracks, 'UniformOutput', false);
            obj.Tracks = vertcat(TracksCell{:});
        end
    end
    
    methods (Access = ?ros.Message)
        function strObj = saveobj(obj)
            %saveobj Implements saving of message to MAT file
            
            % Return an empty element if object array is empty
            if isempty(obj)
                strObj = struct.empty;
                return
            end
            
            strObj.Header = saveobj(obj.Header);
            strObj.Tracks = arrayfun(@(x) saveobj(x), obj.Tracks);
        end
    end
    
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
            %loadobj Implements loading of message from MAT file
            
            % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.custom.msggen.radar_msgs.RadarTrackArray.empty(0,1);
                return
            end
            
            % Create an empty message object
            obj = ros.custom.msggen.radar_msgs.RadarTrackArray;
            obj.reload(strObj);
        end
    end
end
