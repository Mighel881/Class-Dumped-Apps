//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SearchHeaderTableRowAdapter.h>

@protocol T1SearchHeaderClearCellDelegate;

@interface T1SearchClearHeaderTableRowAdapter : T1SearchHeaderTableRowAdapter
{
    id <T1SearchHeaderClearCellDelegate> _sectionClearDelegate;
}

@property(nonatomic) __weak id <T1SearchHeaderClearCellDelegate> sectionClearDelegate; // @synthesize sectionClearDelegate=_sectionClearDelegate;
- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;

@end

