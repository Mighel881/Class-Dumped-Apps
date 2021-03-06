//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "JETOOBEViewController-Protocol.h"

@class JETOOBEAPState, JETOOBEViewControllerOOBEHelper, NSString;
@protocol JETOOBECollectionViewControllerDataSource;

@interface JETOOBECollectionViewController : QTMCollectionViewController <JETOOBEViewController>
{
    id <JETOOBECollectionViewControllerDataSource> _dataSource;
    JETOOBEAPState *_APState;
    NSString *_analyticsScreenName;
    long long _leftNavigationButtonType;
    JETOOBEViewControllerOOBEHelper *_OOBEHelper;
}

@property(retain, nonatomic) JETOOBEViewControllerOOBEHelper *OOBEHelper; // @synthesize OOBEHelper=_OOBEHelper;
@property(nonatomic) long long leftNavigationButtonType; // @synthesize leftNavigationButtonType=_leftNavigationButtonType;
@property(readonly, nonatomic) NSString *analyticsScreenName; // @synthesize analyticsScreenName=_analyticsScreenName;
@property(readonly, nonatomic) JETOOBEAPState *APState; // @synthesize APState=_APState;
@property(nonatomic) __weak id <JETOOBECollectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)backButtonTapped;
- (void)closeButtonTapped;
- (id)navigationStyle;
- (id)createHeader;
- (void)populateModel;
- (void)chooseSSID:(id)arg1 withPassword:(id)arg2;
- (void)machineStateChangedTo:(long long)arg1;
- (void)sendEvent:(long long)arg1;
@property(readonly, nonatomic) long long lastEvent;
@property(readonly, nonatomic) long long currentMachineState;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAPState:(id)arg1;

@end

