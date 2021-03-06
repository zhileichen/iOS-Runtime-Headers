/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableSet, SKUIFlowcaseArtworkLoader, SKUIFlowcaseComponent, SKUIFlowcaseViewController, SKUIMissingItemLoader;

@interface SKUIFlowcasePageSection : SKUIStorePageSection <SKUIFlowcaseDelegate, SKUIMissingItemDelegate> {
    SKUIFlowcaseArtworkLoader *_artworkLoader;
    SKUIFlowcaseViewController *_flowCaseViewController;
    SKUIMissingItemLoader *_missingItemLoader;
    BOOL _pinned;
    NSMutableSet *_recordedImpressionIDs;
    int _rotationInterfaceOrientation;
}

@property(readonly) SKUIFlowcaseComponent * pageComponent;

- (void).cxx_destruct;
- (void)_addVisibleImpressionsToSession:(id)arg1;
- (id)_artworkLoader;
- (id)_flowCaseViewController;
- (void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2;
- (id)_missingItemLoader;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)flowcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3;
- (id)flowcase:(id)arg1 imageForItem:(id)arg2 index:(int)arg3 orientation:(int)arg4;
- (void)flowcaseDidChangeVisibleViews:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (int)numberOfCells;
- (id)popPinnedHeaderView;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)restorePinnedHeaderView:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
