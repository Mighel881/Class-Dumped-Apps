//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListViewControllerDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class AWEBaseListSectionController, NSArray, UIView;

@protocol AWEBaseListViewControllerDataSource <NSObject, AWEBaseListViewControllerDelegate>

@optional
- (UIView *)emptySectionsPlaceholderView;
- (_Bool)shouldStickHeaderAtSectionIndex:(long long)arg1 sectionController:(AWEBaseListSectionController *)arg2;
- (NSArray *)sectionControllerClassArray;
- (NSArray *)sectionViewModels;
@end
