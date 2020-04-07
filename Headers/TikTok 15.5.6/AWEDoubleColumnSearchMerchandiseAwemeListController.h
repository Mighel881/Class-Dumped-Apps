//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class AWEDoubleColumnSearchMerchandiseManager, NSArray;

@interface AWEDoubleColumnSearchMerchandiseAwemeListController : AWEListDataController
{
    long long _initialIndex;
    AWEDoubleColumnSearchMerchandiseManager *_manager;
    NSArray *_helperItems;
}

@property(copy, nonatomic) NSArray *helperItems; // @synthesize helperItems=_helperItems;
@property(nonatomic) __weak AWEDoubleColumnSearchMerchandiseManager *manager; // @synthesize manager=_manager;
@property(nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
- (void).cxx_destruct;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)indexPathOfOffset:(long long)arg1;
- (id)helperItemsFromCurrentManager;
- (id)initWithManager:(id)arg1;

@end
