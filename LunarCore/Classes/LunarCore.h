//
//  LunarCore.h
//  LunarCore
//
//  Created by cyan on 15/4/4.
//  Copyright (c) 2015年 cyan. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  获取指定年月的日历数据
 *
 *  @param _year  公历年
 *  @param _month 公历月
 *
 *  @return 该月日历
 */
NSMutableDictionary *calendar(int _year, int _month);


/**
 *  农历转换成公历
 *
 *  @param _year  农历年
 *  @param _month 农历月
 *  @param _month 农历日
 *
 *  @return 公历年月日
 */
NSMutableDictionary *lunarToSolar(int _year, int _month, int _day);


@interface LunarCore : NSObject
    
    +(LunarCore*)shareInstance;
 
    /// 计算复活节
    -(NSString*)getEasterFestival:(NSInteger )_year   _month:(NSInteger)_month   _day:(NSInteger) _day ;
    /**
     *  公历转换成农历
     *
     *  @param _year  公历年
     *  @param _month 公历月
     *  @param _day   公历日
     *
     *  @return 农历年月日
     */
    -(NSMutableDictionary*) solarToLunar:(NSInteger )_year   _month:(NSInteger)_month   _day:(NSInteger) _day ;
    
    /**
     *  公历转换成黄历
     *
     *  @param _year  公历年
     *  @param _month 公历月
     *  @param _day   公历日
     *
     *  @return 农历年月日
     */
    -(NSMutableDictionary*) solarToAlmanac:(NSInteger )_year   _month:(NSInteger)_month   _day:(NSInteger) _day;
    
@end

