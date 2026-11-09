// gml_Object_oRoomDoorBottom_Draw_0 @ 0x140d3a750

void gml_Object_oRoomDoorBottom_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 uVar5;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  byte local_3c;
  undefined8 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  
  local_90 = "gml_Object_oRoomDoorBottom_Alarm_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_88 = 3;
  FUN_140e98b30(param_1,param_2);
  local_88 = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fc9f8);
  if (puVar2 != &local_78) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = puVar2[1];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_118);
  }
  local_38 = &local_78;
  uVar3 = CONCAT44(uVar5,DAT_141a1c640);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar3,&local_38);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_c8) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = puVar2[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  local_88 = 6;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_38 = &local_c8;
  ppuVar6 = &local_38;
  uVar4 = CONCAT44(uVar5,DAT_141a03a98);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar4,ppuVar6);
  if (puVar2 != &local_d8) {
    local_118 = (longlong *)*puVar2;
    uStack_110 = puVar2[1];
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_88 = 7;
  cVar1 = FUN_140e491e0(&local_d8);
  if (cVar1 != '\0') {
    local_88 = 8;
    uStack_110 = CONCAT44(0xd,(undefined4)uStack_110);
    local_118 = (longlong *)0x0;
    local_128 = (longlong *)0x0;
    uStack_120 = uStack_110;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
    FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_a8);
    local_88 = 9;
    uStack_110 = CONCAT44(0xf,(undefined4)uStack_110);
    local_118 = (longlong *)0x10000010000011b;
    local_128 = (longlong *)0x10000010000011b;
    uStack_120 = CONCAT44(0xf,(undefined4)uStack_110);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_b8);
    local_88 = 10;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uStack_120._4_4_ = 6;
    uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_e8,uVar4,uVar7);
    if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_120._4_4_ = 6;
    uVar4 = uVar4 & 0xffffffffffffff00;
    local_128 = param_1;
    FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_f8,uVar4,uVar7 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar4 >> 0x20);
    if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_120 = CONCAT44(local_dc,local_e0);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_128 = local_e8;
    }
    else {
      FUN_1400419b0(&local_128,&local_e8);
    }
    uStack_110._4_4_ = 7;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,2);
    FUN_1400460e0(&local_128,&local_118);
    if ((1 << ((byte)uStack_110._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = local_128;
    uStack_110 = uStack_120;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_118);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_38 = &local_78;
    uStack_120 = CONCAT44(local_ec,local_f0);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
      local_128 = local_f8;
    }
    else {
      FUN_1400419b0(&local_128,&local_f8);
    }
    uStack_110._4_4_ = 7;
    local_118 = (longlong *)CONCAT44(local_118._4_4_,2);
    FUN_1400460e0(&local_128,&local_118);
    if ((1 << ((byte)uStack_110._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = local_128;
    uStack_110 = uStack_120;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_118);
    if ((1 << ((byte)((ulonglong)uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_30 = local_68;
    uStack_110 = CONCAT44(0xf,(undefined4)uStack_110);
    local_118 = (longlong *)0x1000000000000ea;
    local_128 = (longlong *)0x1000000000000ea;
    uStack_120 = CONCAT44(0xf,(undefined4)uStack_110);
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_128);
    local_28 = local_58;
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar5,DAT_141a10448),&local_38);
    if (puVar2 != &local_48) {
      local_118 = (longlong *)*puVar2;
      uStack_110 = puVar2[1];
      if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_48);
      }
      FUN_140041b80(&local_48,&local_118);
    }
    local_20 = &local_48;
    FUN_140edd0e0(param_1,param_2,1,&local_20);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

