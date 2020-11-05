classdef SixChannelControlCommand < ros.Message
    %SixChannelControlCommand MATLAB implementation of ros_sut/SixChannelControlCommand
    %   This class was automatically generated by
    %   ros.msg.internal.gen.MessageClassGenerator.
    
    %   Copyright 2014-2020 The MathWorks, Inc.
    
    %#ok<*INUSD>
    
    properties (Constant)
        MessageType = 'ros_sut/SixChannelControlCommand' % The ROS message type
    end
    
    properties (Constant, Hidden)
        MD5Checksum = '0f55685654ce18486e93ee8817c0a1ab' % The MD5 Checksum of the message definition
    end
    
    properties (Access = protected)
        JavaMessage % The Java message object
    end
    
    properties (Constant, Access = protected)
        StdMsgsHeaderClass = ros.msg.internal.MessageFactory.getClassForType('std_msgs/Header') % Dispatch to MATLAB class for message type std_msgs/Header
    end
    
    properties (Dependent)
        Header
        FlRpm
        FrRpm
        RlRpm
        RrRpm
        FlSteer
        FrSteer
        Brake
        Throttle
    end
    
    properties (Access = protected)
        Cache = struct('Header', []) % The cache for fast data access
    end
    
    properties (Constant, Hidden)
        PropertyList = {'Brake', 'FlRpm', 'FlSteer', 'FrRpm', 'FrSteer', 'Header', 'RlRpm', 'RrRpm', 'Throttle'} % List of non-constant message properties
        ROSPropertyList = {'brake', 'fl_rpm', 'fl_steer', 'fr_rpm', 'fr_steer', 'header', 'rl_rpm', 'rr_rpm', 'throttle'} % List of non-constant ROS message properties
    end
    
    methods
        function obj = SixChannelControlCommand(msg)
            %SixChannelControlCommand Construct the message object SixChannelControlCommand
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
            validateattributes(header, {obj.StdMsgsHeaderClass}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'Header');
            
            obj.JavaMessage.setHeader(header.getJavaObject);
            
            % Update cache if necessary
            if ~isempty(obj.Cache.Header)
                obj.Cache.Header.setJavaObject(header.getJavaObject);
            end
        end
        
        function flrpm = get.FlRpm(obj)
            %get.FlRpm Get the value for property FlRpm
            flrpm = single(obj.JavaMessage.getFlRpm);
        end
        
        function set.FlRpm(obj, flrpm)
            %set.FlRpm Set the value for property FlRpm
            validateattributes(flrpm, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'FlRpm');
            
            obj.JavaMessage.setFlRpm(flrpm);
        end
        
        function frrpm = get.FrRpm(obj)
            %get.FrRpm Get the value for property FrRpm
            frrpm = single(obj.JavaMessage.getFrRpm);
        end
        
        function set.FrRpm(obj, frrpm)
            %set.FrRpm Set the value for property FrRpm
            validateattributes(frrpm, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'FrRpm');
            
            obj.JavaMessage.setFrRpm(frrpm);
        end
        
        function rlrpm = get.RlRpm(obj)
            %get.RlRpm Get the value for property RlRpm
            rlrpm = single(obj.JavaMessage.getRlRpm);
        end
        
        function set.RlRpm(obj, rlrpm)
            %set.RlRpm Set the value for property RlRpm
            validateattributes(rlrpm, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'RlRpm');
            
            obj.JavaMessage.setRlRpm(rlrpm);
        end
        
        function rrrpm = get.RrRpm(obj)
            %get.RrRpm Get the value for property RrRpm
            rrrpm = single(obj.JavaMessage.getRrRpm);
        end
        
        function set.RrRpm(obj, rrrpm)
            %set.RrRpm Set the value for property RrRpm
            validateattributes(rrrpm, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'RrRpm');
            
            obj.JavaMessage.setRrRpm(rrrpm);
        end
        
        function flsteer = get.FlSteer(obj)
            %get.FlSteer Get the value for property FlSteer
            flsteer = single(obj.JavaMessage.getFlSteer);
        end
        
        function set.FlSteer(obj, flsteer)
            %set.FlSteer Set the value for property FlSteer
            validateattributes(flsteer, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'FlSteer');
            
            obj.JavaMessage.setFlSteer(flsteer);
        end
        
        function frsteer = get.FrSteer(obj)
            %get.FrSteer Get the value for property FrSteer
            frsteer = single(obj.JavaMessage.getFrSteer);
        end
        
        function set.FrSteer(obj, frsteer)
            %set.FrSteer Set the value for property FrSteer
            validateattributes(frsteer, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'FrSteer');
            
            obj.JavaMessage.setFrSteer(frsteer);
        end
        
        function brake = get.Brake(obj)
            %get.Brake Get the value for property Brake
            brake = single(obj.JavaMessage.getBrake);
        end
        
        function set.Brake(obj, brake)
            %set.Brake Set the value for property Brake
            validateattributes(brake, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'Brake');
            
            obj.JavaMessage.setBrake(brake);
        end
        
        function throttle = get.Throttle(obj)
            %get.Throttle Get the value for property Throttle
            throttle = single(obj.JavaMessage.getThrottle);
        end
        
        function set.Throttle(obj, throttle)
            %set.Throttle Set the value for property Throttle
            validateattributes(throttle, {'numeric'}, {'nonempty', 'scalar'}, 'SixChannelControlCommand', 'Throttle');
            
            obj.JavaMessage.setThrottle(throttle);
        end
    end
    
    methods (Access = protected)
        function resetCache(obj)
            %resetCache Resets any cached properties
            obj.Cache.Header = [];
        end
        
        function cpObj = copyElement(obj)
            %copyElement Implements deep copy behavior for message
            
            % Call default copy method for shallow copy
            cpObj = copyElement@ros.Message(obj);
            
            % Clear any existing cached properties
            cpObj.resetCache;
            
            % Create a new Java message object
            cpObj.JavaMessage = obj.createNewJavaMessage;
            
            % Iterate over all primitive properties
            cpObj.FlRpm = obj.FlRpm;
            cpObj.FrRpm = obj.FrRpm;
            cpObj.RlRpm = obj.RlRpm;
            cpObj.RrRpm = obj.RrRpm;
            cpObj.FlSteer = obj.FlSteer;
            cpObj.FrSteer = obj.FrSteer;
            cpObj.Brake = obj.Brake;
            cpObj.Throttle = obj.Throttle;
            
            % Recursively copy compound properties
            cpObj.Header = copy(obj.Header);
        end
        
        function reload(obj, strObj)
            %reload Called by loadobj to assign properties
            obj.FlRpm = strObj.FlRpm;
            obj.FrRpm = strObj.FrRpm;
            obj.RlRpm = strObj.RlRpm;
            obj.RrRpm = strObj.RrRpm;
            obj.FlSteer = strObj.FlSteer;
            obj.FrSteer = strObj.FrSteer;
            obj.Brake = strObj.Brake;
            obj.Throttle = strObj.Throttle;
            obj.Header = feval([obj.StdMsgsHeaderClass '.loadobj'], strObj.Header);
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
            
            strObj.FlRpm = obj.FlRpm;
            strObj.FrRpm = obj.FrRpm;
            strObj.RlRpm = obj.RlRpm;
            strObj.RrRpm = obj.RrRpm;
            strObj.FlSteer = obj.FlSteer;
            strObj.FrSteer = obj.FrSteer;
            strObj.Brake = obj.Brake;
            strObj.Throttle = obj.Throttle;
            strObj.Header = saveobj(obj.Header);
        end
    end
    
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
            %loadobj Implements loading of message from MAT file
            
            % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.custom.msggen.ros_sut.SixChannelControlCommand.empty(0,1);
                return
            end
            
            % Create an empty message object
            obj = ros.custom.msggen.ros_sut.SixChannelControlCommand;
            obj.reload(strObj);
        end
    end
end
