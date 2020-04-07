//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCollectionViewController.h>

#import <Module_Framework/YTCollectionConfigurationResponderProvider-Protocol.h>

@class GIMMe, NSString;

@interface YTShareNestedCollectionViewController : YTInnerTubeCollectionViewController <YTCollectionConfigurationResponderProvider>
{
}

- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)elementsConfiguration;
- (_Bool)shouldBlacklistElements;
- (_Bool)shouldEnableElements;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 UIFormatter:(id)arg3 layout:(id)arg4 controllerFactory:(id)arg5;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 format:(long long)arg3;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 format:(long long)arg3 layout:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
