//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBBlockTableView.h"

#import "DBUpgradeProductSelectorTableViewBlockItemDelegate-Protocol.h"

@protocol DBUpgradeProductSelectorTableViewDelegate;

@interface DBUpgradeProductSelectorTableView : DBBlockTableView <DBUpgradeProductSelectorTableViewBlockItemDelegate>
{
    long long _style;
    id <DBUpgradeProductSelectorTableViewDelegate> _delegate;
}

+ (id)db_tableViewItemsForProducts:(id)arg1 usingPayments:(id)arg2 fullWidth:(_Bool)arg3 style:(long long)arg4 itemSelectDelegate:(id)arg5;
- (void).cxx_destruct;
- (void)didSelectUpgradeProductSelectorTableViewBlockItem:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (id)selectedProduct;
- (id)initWithProducts:(id)arg1 usingPayments:(id)arg2 fullWidth:(_Bool)arg3 style:(long long)arg4 delegate:(id)arg5;

@end
