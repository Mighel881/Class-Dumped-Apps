//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWERxBaseStore.h"

@class AWERxObservable, AWERxReadonlyProperty, NSString, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEPOINearbyHotStore : AWERxBaseStore
{
    UIViewController<AWEAwemeDetailTableViewControllerProtocol> *_detailTableViewController;
    NSString *_poiID;
    double _longitude;
    double _latitude;
    AWERxReadonlyProperty *_feedList;
    AWERxReadonlyProperty *_dataController;
    AWERxReadonlyProperty *_hasMoreData;
    AWERxObservable *_nearbyEvent;
}

@property(readonly, nonatomic) AWERxObservable *nearbyEvent; // @synthesize nearbyEvent=_nearbyEvent;
@property(readonly, nonatomic) AWERxReadonlyProperty *hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(readonly, nonatomic) AWERxReadonlyProperty *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic) AWERxReadonlyProperty *feedList; // @synthesize feedList=_feedList;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) __weak UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailTableViewController; // @synthesize detailTableViewController=_detailTableViewController;
- (void).cxx_destruct;
- (void)p_loadMoreFeedWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_initFetchWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_bindState;
- (_Bool)setState:(id)arg1 withValue:(id)arg2 context:(id)arg3;
- (_Bool)dispatchAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModule:(id)arg1;

@end
