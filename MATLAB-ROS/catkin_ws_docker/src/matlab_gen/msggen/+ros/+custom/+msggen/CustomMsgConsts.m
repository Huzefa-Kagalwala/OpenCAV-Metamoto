classdef CustomMsgConsts
    %CustomMsgConsts This class stores all message types
    %   The message types are constant properties, which in turn resolve
    %   to the strings of the actual types.
    
    %   Copyright 2014-2020 The MathWorks, Inc.
    
    properties (Constant)
        gps_msgs_gps = 'gps_msgs/gps'
        radar_msgs_RadarProcessed = 'radar_msgs/RadarProcessed'
        radar_msgs_RadarProcessedArray = 'radar_msgs/RadarProcessedArray'
        radar_msgs_RadarTrack = 'radar_msgs/RadarTrack'
        radar_msgs_RadarTrackArray = 'radar_msgs/RadarTrackArray'
        ros_sut_ControlCommand = 'ros_sut/ControlCommand'
        ros_sut_SixChannelControlCommand = 'ros_sut/SixChannelControlCommand'
    end
    
    methods (Static, Hidden)
        function messageList = getMessageList
            %getMessageList Generate a cell array with all message types.
            %   The list will be sorted alphabetically.
            
            persistent msgList
            if isempty(msgList)
                msgList = cell(7, 1);
                msgList{1} = 'gps_msgs/gps';
                msgList{2} = 'radar_msgs/RadarProcessed';
                msgList{3} = 'radar_msgs/RadarProcessedArray';
                msgList{4} = 'radar_msgs/RadarTrack';
                msgList{5} = 'radar_msgs/RadarTrackArray';
                msgList{6} = 'ros_sut/ControlCommand';
                msgList{7} = 'ros_sut/SixChannelControlCommand';
            end
            
            messageList = msgList;
        end
        
        function serviceList = getServiceList
            %getServiceList Generate a cell array with all service types.
            %   The list will be sorted alphabetically.
            
            persistent svcList
            if isempty(svcList)
                svcList = cell(0, 1);
            end
            
            % The message list was already sorted, so don't need to sort
            % again.
            serviceList = svcList;
        end
        
        function actionList = getActionList
            %getActionList Generate a cell array with all action types.
            %   The list will be sorted alphabetically.
            
            persistent actList
            if isempty(actList)
                actList = cell(0, 1);
            end
            
            % The message list was already sorted, so don't need to sort
            % again.
            actionList = actList;
        end
    end
end
