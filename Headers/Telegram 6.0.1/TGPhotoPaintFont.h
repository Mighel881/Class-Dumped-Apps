//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TGPhotoPaintFont : NSObject
{
    NSString *_title;
    double _titleInset;
    NSString *_fontName;
    NSString *_previewFontName;
    double _sizeCorrection;
}

+ (id)availableFonts;
+ (id)fontWithTitle:(id)arg1 titleInset:(double)arg2 fontName:(id)arg3 previewFontName:(id)arg4 sizeCorrection:(double)arg5;
@property(readonly, nonatomic) double sizeCorrection; // @synthesize sizeCorrection=_sizeCorrection;
@property(readonly, nonatomic) NSString *previewFontName; // @synthesize previewFontName=_previewFontName;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(readonly, nonatomic) double titleInset; // @synthesize titleInset=_titleInset;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
