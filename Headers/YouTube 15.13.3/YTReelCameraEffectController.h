//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTEditEffectsTraySelectionDelegate-Protocol.h"
#import "YTEditTuneEffectControllerDelegate-Protocol.h"
#import "YTReelCameraResponseObserver-Protocol.h"

@class GIMMe, NSString, UIViewController, YTEditEffectsProvider, YTEditEffectsTrayContainerViewController, YTEditEffectsTrayViewController;
@protocol YTEditEffect, YTEditEffectProcessor, YTEditFeatureTab, YTReelCameraEffectControllerDelegate;

@interface YTReelCameraEffectController : NSObject <YTEditEffectsTraySelectionDelegate, YTEditTuneEffectControllerDelegate, YTReelCameraResponseObserver>
{
    YTEditEffectsProvider *_effectsProvider;
    YTEditEffectsTrayViewController *_expressiveEffectTrayViewController;
    YTEditEffectsTrayContainerViewController *_presetEffectTrayViewController;
    _Bool _userHasSelectedAnEffect;
    GIMMe *_gimme;
    id <YTReelCameraEffectControllerDelegate> _delegate;
    id <YTEditEffectProcessor> _effectProcessor;
}

+ (id)packageIdentifierForPackage:(long long)arg1;
@property(readonly, nonatomic) _Bool userHasSelectedAnEffect; // @synthesize userHasSelectedAnEffect=_userHasSelectedAnEffect;
@property(readonly, nonatomic) UIViewController<YTEditFeatureTab> *expressiveEffectTrayViewController; // @synthesize expressiveEffectTrayViewController=_expressiveEffectTrayViewController;
@property(readonly, nonatomic) UIViewController<YTEditFeatureTab> *presetEffectTrayViewController; // @synthesize presetEffectTrayViewController=_presetEffectTrayViewController;
@property(readonly, nonatomic) id <YTEditEffectProcessor> effectProcessor; // @synthesize effectProcessor=_effectProcessor;
@property(nonatomic) __weak id <YTReelCameraEffectControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)cameraResponseRequestor:(id)arg1 didReceiveResponse:(id)arg2 error:(id)arg3;
- (void)setUpSwazzleEffectProcessor;
- (void)setUpSwazzleExpressiveEffectsFromCatalog:(id)arg1;
- (void)setUpSwazzlePresetsEffectsFromCatalog:(id)arg1;
- (id)packageConfigForPackage:(long long)arg1 effectCatalog:(id)arg2;
- (void)loadEffectsFromSwazzleEffectsSettings:(id)arg1;
- (void)setUpKazooThumbnailProvider:(id)arg1 graphSettings:(id)arg2;
- (void)setUpKazooDataSources:(id)arg1;
- (void)setUpKazooEffectsProvider:(id)arg1;
- (void)setUpKazooEffectProcessor:(id)arg1;
- (void)loadEffectsFromVideoEffectSettings:(id)arg1;
- (void)setUpPresetsEffectsTray;
- (void)setUpExpressiveEffectsTray;
- (_Bool)effectIsLoaded:(id)arg1;
- (void)tuneEffectControllerDidConfirm:(id)arg1;
- (void)tuneEffectControllerDidCancel:(id)arg1;
- (void)tuneEffectControllerSliderValueChanged:(id)arg1;
- (void)setEffectProcessor:(id)arg1;
- (void)setSelectedEffectOnEffectProcessor:(id)arg1;
- (void)setSelectedEffect:(id)arg1;
- (void)effectsTray:(id)arg1 didDeselectEffect:(id)arg2;
- (void)effectsTray:(id)arg1 didSelectEffect:(id)arg2;
- (void)markNewEffectsViewed;
@property(readonly, nonatomic) _Bool hasNewEffects;
- (id)gelModelSelectedEffect;
@property(readonly, nonatomic, getter=isPresetEffectActive) _Bool presetEffectActive;
@property(readonly, nonatomic, getter=isSelectedEffectLoading) _Bool selectedEffectLoading;
@property(readonly, nonatomic) id <YTEditEffect> selectedEffect;
- (void)clearSelectedEffect;
- (void)loadDefaultEffect;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
