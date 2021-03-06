//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface AWEI18NProfileBioView : UIView
{
    UILabel *_bioUrlLabel;
    NSString *_text;
    UIImageView *_linkIconImageView;
}

@property(nonatomic) __weak UIImageView *linkIconImageView; // @synthesize linkIconImageView=_linkIconImageView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak UILabel *bioUrlLabel; // @synthesize bioUrlLabel=_bioUrlLabel;
- (void).cxx_destruct;
- (void)swithToInvalidStatus:(_Bool)arg1;
- (void)setupMailUI;
- (void)setupLinkUI;
- (id)initWithBioType:(unsigned long long)arg1;
- (id)initWithBioMailType;
- (id)initWithBioUrlType;

@end

