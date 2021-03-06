/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>, CLLocationManagerRoutine, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSXPCConnection *_connection;
    <CLLocationManagerDelegate> *_delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _updating;
}

@property(retain) NSXPCConnection * connection;
@property <CLLocationManagerDelegate> * delegate;
@property CLLocationManagerRoutine * locationManagerRoutine;
@property BOOL updating;

- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateLocations:(id)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (id)locationManagerRoutine;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)updating;

@end
