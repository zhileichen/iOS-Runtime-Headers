/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUContinuationDelegate>;

@interface SUContinuation : NSObject {
    <SUContinuationDelegate> *_delegate;
}

@property <SUContinuationDelegate> * delegate;

- (void)cancel;
- (id)delegate;
- (void)sendErrorToDelegate:(id)arg1;
- (void)sendFinishToDelegate;
- (void)setDelegate:(id)arg1;
- (void)start;

@end
