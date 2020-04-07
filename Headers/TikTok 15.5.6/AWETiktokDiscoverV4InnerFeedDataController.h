//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSDictionary, NSString;

@interface AWETiktokDiscoverV4InnerFeedDataController : AWEListDataController
{
    NSString *_tabName;
    NSString *_cellID;
    NSDictionary *_baseParameters;
}

@property(retain, nonatomic) NSDictionary *baseParameters; // @synthesize baseParameters=_baseParameters;
@property(copy, nonatomic) NSString *cellID; // @synthesize cellID=_cellID;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;
- (id)filterDuplicatedDatasourceWithArray:(id)arg1 isEqual:(CDUnknownBlockType)arg2 didGetDuplicatedArray:(CDUnknownBlockType)arg3;
- (id)loadmoreDataSourceWithArray:(id)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDiscoveryModel:(id)arg1;
- (id)initWithTabName:(id)arg1;

@end
