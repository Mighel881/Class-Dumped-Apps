//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

@class NSString, UILabel, _WAGroupSubjectEditingCell;
@protocol WAGroupSubjectEditControllerDelegate;

@interface WAGroupSubjectEditController : WAStaticTableViewController
{
    _WAGroupSubjectEditingCell *_textFieldCell;
    UILabel *_labelCharCount;
    NSString *_preloadedSubjectText;
    id <WAGroupSubjectEditControllerDelegate> _delegate;
}

+ (_Bool)usesManagedTableViewHeaderFooter;
@property(nonatomic) __weak id <WAGroupSubjectEditControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preloadedSubjectText; // @synthesize preloadedSubjectText=_preloadedSubjectText;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldValueChanged:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)updateCharCount;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)newAutoLayoutAwareTableViewFooter;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUpTableView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
