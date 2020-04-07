//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCMeasureComponentProtocol-Protocol.h"

@class ACCMeasureOnceItem, NSDictionary, NSMutableDictionary, NSString;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider;

@interface ACCMeasureComponent : NSObject <ACCMeasureComponentProtocol>
{
    _Bool _didReportViewControllerLifeCycleData;
    id <ACCComponentBusProtocol> _componentBus;
    NSDictionary *_vcLifeCycleStageToItemMap;
    NSMutableDictionary *_customReportData;
    ACCMeasureOnceItem *_viewControllerInitItem;
    ACCMeasureOnceItem *_viewDidLoadStartItem;
    ACCMeasureOnceItem *_viewDidLoadEndItem;
    ACCMeasureOnceItem *_viewWillAppearItem;
    ACCMeasureOnceItem *_viewDidAppearItem;
    NSString *_customPrefixString;
    NSDictionary *_extraData;
}

@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *customPrefixString; // @synthesize customPrefixString=_customPrefixString;
@property(nonatomic) _Bool didReportViewControllerLifeCycleData; // @synthesize didReportViewControllerLifeCycleData=_didReportViewControllerLifeCycleData;
@property(retain, nonatomic) ACCMeasureOnceItem *viewDidAppearItem; // @synthesize viewDidAppearItem=_viewDidAppearItem;
@property(retain, nonatomic) ACCMeasureOnceItem *viewWillAppearItem; // @synthesize viewWillAppearItem=_viewWillAppearItem;
@property(retain, nonatomic) ACCMeasureOnceItem *viewDidLoadEndItem; // @synthesize viewDidLoadEndItem=_viewDidLoadEndItem;
@property(retain, nonatomic) ACCMeasureOnceItem *viewDidLoadStartItem; // @synthesize viewDidLoadStartItem=_viewDidLoadStartItem;
@property(retain, nonatomic) ACCMeasureOnceItem *viewControllerInitItem; // @synthesize viewControllerInitItem=_viewControllerInitItem;
@property(retain, nonatomic) NSMutableDictionary *customReportData; // @synthesize customReportData=_customReportData;
@property(retain, nonatomic) NSDictionary *vcLifeCycleStageToItemMap; // @synthesize vcLifeCycleStageToItemMap=_vcLifeCycleStageToItemMap;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)defaultPrefixString;
@property(readonly, nonatomic) NSString *prefixString;
- (double)p_currentTimeInterval;
- (double)getTimeIntervalForBeginMeasureItem:(id)arg1 endMeasureItem:(id)arg2;
- (id)getReportKeyForBeginString:(id)arg1 endString:(id)arg2;
- (id)getReportKeyForBeginMeasureItem:(id)arg1 endMeasureItem:(id)arg2;
- (void)setLifeCycleDataForDictionary:(id)arg1 suffixName:(id)arg2 beginTimeInterval:(double)arg3 endTimeInterval:(double)arg4;
- (void)setLifeCycleDataForDictionary:(id)arg1 beginMeasureItem:(id)arg2 endMeasureItem:(id)arg3;
- (id)getViewControllerLifeCycleData;
- (void)postViewControllerLifeCycleData;
- (void)recordTimeIntervalWithSuffixName:(id)arg1 timeInterval:(double)arg2 relateToLifeCycleStage:(unsigned long long)arg3;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerWillAppear;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end
