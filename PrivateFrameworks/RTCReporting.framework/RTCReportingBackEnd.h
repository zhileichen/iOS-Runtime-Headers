/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@class NSDictionary, NSString;

@interface RTCReportingBackEnd : NSObject {
    unsigned char _batchEvents;
    NSString *_buildVersion;
    unsigned short _clientVersion;
    int _compType;
    NSString *_displayURL;
    unsigned short _eventID;
    NSString *_hardwareType;
    unsigned char _isInternal;
    NSString *_name;
    NSString *_productFamily;
    NSString *_productVersion;
    NSDictionary *_profile;
    unsigned char _requireUserInfo;
    double _samplingFactor;
    unsigned char _selfVersionMajor;
    unsigned char _selfVersionMinor;
    unsigned int _sessionID;
    double _startTimeStamp;
    int _state;
    char *_udid;
    NSDictionary *_userInfoDict;
}

@property unsigned char batchEvents;
@property(copy) NSString * buildVersion;
@property unsigned short clientVersion;
@property int compType;
@property(copy) NSString * displayURL;
@property(copy) NSString * hardwareType;
@property unsigned char isInternal;
@property(copy) NSString * productFamily;
@property(copy) NSString * productVersion;
@property unsigned char requireUserInfo;
@property double samplingFactor;
@property unsigned int sessionID;
@property int state;
@property char * udid;

- (unsigned char)batchEvents;
- (id)buildVersion;
- (void)cleanup;
- (unsigned short)clientVersion;
- (int)compType;
- (id)convertIntoSHA256:(id)arg1;
- (void)dealloc;
- (id)displayURL;
- (id)flushMessages;
- (id)hardwareType;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (unsigned char)isInternal;
- (id)productFamily;
- (id)productVersion;
- (unsigned char)requireUserInfo;
- (double)samplingFactor;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 dict:(id)arg5;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;
- (unsigned int)sessionID;
- (void)setBatchEvents:(unsigned char)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setClientVersion:(unsigned short)arg1;
- (void)setCompType:(int)arg1;
- (void)setDisplayURL:(id)arg1;
- (void)setHardwareType:(id)arg1;
- (void)setIsInternal:(unsigned char)arg1;
- (void)setProductFamily:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setRequireUserInfo:(unsigned char)arg1;
- (void)setSamplingFactor:(double)arg1;
- (void)setSelfVersion:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setStartTimestamp:(const struct timeval { int x1; int x2; }*)arg1;
- (void)setState:(int)arg1;
- (void)setUdid:(char *)arg1;
- (id)setUserInfoDict:(id)arg1;
- (int)state;
- (char *)udid;
- (BOOL)uploadFileAtPath:(id)arg1;

@end
