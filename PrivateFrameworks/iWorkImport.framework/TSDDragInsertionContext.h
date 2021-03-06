/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDragInsertionContext : TSDInsertionContext {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL mFromDragToInsertController;
    BOOL mInsertWillBeDiscarded;
    } mPreferredCenter;
    BOOL mPreferredCenterRequired;
    BOOL mShouldEndEditing;
}

- (BOOL)fromDragToInsertController;
- (BOOL)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(struct CGPoint { float x1; float x2; })arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5;
- (BOOL)insertFloating;
- (BOOL)insertFromDrag;
- (BOOL)insertWillBeDiscarded;
- (BOOL)isInteractive;
- (BOOL)isPreferredCenterRequired;
- (struct CGPoint { float x1; float x2; })preferredCenter;
- (BOOL)shouldEndEditing;

@end
