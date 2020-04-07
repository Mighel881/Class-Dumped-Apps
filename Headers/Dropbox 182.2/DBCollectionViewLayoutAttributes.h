//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

#import "DBCollectionViewLayoutAttributesEditSupporting-Protocol.h"
#import "DBCollectionViewLayoutAttributesSeparatorSupporting-Protocol.h"

@class NSString;

@interface DBCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <DBCollectionViewLayoutAttributesSeparatorSupporting, DBCollectionViewLayoutAttributesEditSupporting>
{
    _Bool _firstItemInSection;
    _Bool _lastItemInSection;
    _Bool _shouldHideSeparator;
    _Bool _editing;
    double _separatorHeight;
    double _separatorInset;
}

@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
@property(nonatomic) double separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) _Bool lastItemInSection; // @synthesize lastItemInSection=_lastItemInSection;
@property(nonatomic) _Bool firstItemInSection; // @synthesize firstItemInSection=_firstItemInSection;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
