//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"

@interface _TtC10ProtonMail21ContactCollectionView : UICollectionView <UICollectionViewDataSource>
{
    // Error parsing type: , name: _prompt
    // Error parsing type: , name: _allowsTextInput
    // Error parsing type: , name: _showPrompt
    // Error parsing type: , name: searchText
    // Error parsing type: , name: cellHeight
    // Error parsing type: , name: selectedContacts
    // Error parsing type: , name: contactDelegate
    // Error parsing type: , name: prototypeCell
    // Error parsing type: , name: promptCell
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)resignFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)reloadData;
@property(nonatomic) struct CGRect bounds;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
