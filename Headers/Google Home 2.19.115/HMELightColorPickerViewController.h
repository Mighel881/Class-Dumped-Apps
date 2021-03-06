//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class AnalyticsLogger, NSArray, NSString;
@protocol ASTHomeAutomationManagerProtocol, HMELightColorPickerViewControllerDelegate;

@interface HMELightColorPickerViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _languageSupport;
    id <HMELightColorPickerViewControllerDelegate> _delegate;
    id <ASTHomeAutomationManagerProtocol> _manager;
    AnalyticsLogger *_analyticsLogger;
    NSArray *_lights;
    NSArray *_colors;
}

@property(nonatomic) _Bool languageSupport; // @synthesize languageSupport=_languageSupport;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSArray *lights; // @synthesize lights=_lights;
@property(readonly, nonatomic) AnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <ASTHomeAutomationManagerProtocol> manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <HMELightColorPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getSupportedDevicesForColor:(id)arg1;
- (id)determineUniqueColors;
- (void)snowSnackBarWithMessage:(id)arg1;
- (void)showChangeColorFailed;
- (void)resetPreferredContentSize;
- (void)logNetworkEventComplete:(id)arg1 withError:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithHomeAutomationManager:(id)arg1 analyticsLogger:(id)arg2 lights:(id)arg3 languageSupport:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

