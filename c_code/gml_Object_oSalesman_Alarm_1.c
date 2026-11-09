// gml_Object_oSalesman_Alarm_1 @ 0x140d5be00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSalesman_Alarm_1(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_c0 = "gml_Object_oSalesman_Create_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  _eh_vector_constructor_iterator_(local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = (longlong *)0x0;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_2c = 0xffffff;
  local_38 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_b8 = 2;
  uVar5 = 0;
  gml_Script_truestate_set_default(param_1,param_2,&local_f8,0,0);
  local_b8 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 7;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 10;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaf8);
  uStack_100._4_4_ = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_48,uVar5,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_100._4_4_ = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_58,uVar5,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_48;
  uStack_100 = CONCAT44(uStack_3c,uStack_40);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_108);
  local_80 = local_b0;
  local_108 = local_58;
  uStack_100 = CONCAT44(uStack_4c,uStack_50);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_108);
  local_78 = local_a0;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_80;
  uVar5 = CONCAT44(uVar6,DAT_1419fdca8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,ppuVar7);
  if (puVar3 != puVar2) {
    local_108 = (longlong *)*puVar3;
    uStack_100 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  FUN_140e60910(1);
  local_b8 = 0xb;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb98);
  uStack_100._4_4_ = 6;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_48,uVar5,uVar8);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_100._4_4_ = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_58,uVar5,uVar8 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_48;
  uStack_100 = CONCAT44(uStack_3c,uStack_40);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_108);
  local_80 = local_b0;
  local_108 = local_58;
  uStack_100 = CONCAT44(uStack_4c,uStack_50);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_108);
  local_78 = local_a0;
  FUN_140e609c0(param_1);
  ppuVar7 = &local_80;
  uVar5 = CONCAT44(uVar6,DAT_1419fdca8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,ppuVar7);
  if (puVar3 != puVar2) {
    local_108 = (longlong *)*puVar3;
    uStack_100 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  FUN_140e60910(1);
  local_b8 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_b8 = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_b8 = 0x11;
  uStack_100 = CONCAT44(0xd,(undefined4)uStack_100);
  local_108 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = uStack_100;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_d8);
  uStack_100._4_4_ = 0xf;
  local_108 = (longlong *)0x100000000000147;
  FUN_140e87930(&local_108,DAT_1419fec78,0x80000000,&local_68);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_b8 = 0x12;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fecc8);
  uStack_100._4_4_ = 0xf;
  local_108 = (longlong *)0x100000000000106;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_141a0a958,0x80000000,&local_38,uVar5,uVar8);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e609c0(param_1);
  if (&local_38 != pplVar4) {
    local_d8 = local_38;
    uStack_d0 = CONCAT44(uStack_2c,uStack_30);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x13;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fecb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_b8 = 0x14;
  uStack_100._4_4_ = 0xf;
  local_108 = (longlong *)0x100000000000106;
  FUN_140e87440(&local_108,DAT_1419fd968,0x80000000,&local_e8,uVar5 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uVar1 = local_dc & 0xffffff;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      local_e8 = (double)FUN_140e4b060(&local_e8);
      local_dc = 0;
    }
    else {
      if (uVar1 == 7) {
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
        goto LAB_140d5c610;
      }
      if (uVar1 == 10) {
        local_e8 = (double)((longlong)local_e8 + 1);
        goto LAB_140d5c610;
      }
      if (uVar1 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
        goto LAB_140d5c610;
      }
      local_dc = 0;
    }
  }
  local_e8 = local_e8 + 1.0;
LAB_140d5c610:
  uStack_100._4_4_ = 0xf;
  local_108 = (longlong *)0x100000000000106;
  FUN_140e87930(&local_108,DAT_1419fd968,0x80000000,&local_e8);
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_b8 = 0x17;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5b18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_108,gml_Object_oSalesman_Step_1,param_1);
  if (&local_108 != pplVar4) {
    local_d8 = local_108;
    uStack_d0 = CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_d8);
  }
  if ((1 << ((byte)uStack_100._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e60910(1);
  local_b8 = 0x20;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_d8 = (longlong *)CONCAT44(uRam00000001419edb04,_DAT_1419edb00);
  uStack_d0 = CONCAT44(uRam00000001419edb0c,uRam00000001419edb08);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_d8);
  local_80 = local_b0;
  uVar1 = (int)(DAT_1419febb8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar1 == 0xf) {
    uVar1 = 0x4000004;
  }
  else {
    uVar1 = uVar1 | 0x1000000;
  }
  uStack_100 = CONCAT44(0xf,(undefined4)uStack_100);
  local_108 = (longlong *)(CONCAT44(uVar1,DAT_1419febb8) & 0xffffffff00ffffff);
  local_d8 = (longlong *)(CONCAT44(uVar1,DAT_1419febb8) & 0xffffffff00ffffff);
  uStack_d0 = CONCAT44(0xf,(undefined4)uStack_100);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_d8);
  local_78 = local_a0;
  local_d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_d0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_70 = local_90;
  gml_Script_truestate_enqueue(param_1,param_2,&local_f8,3,&local_80);
  local_b8 = 0x21;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_d8 = (longlong *)CONCAT44(uRam00000001419edaf4,_DAT_1419edaf0);
  uStack_d0 = CONCAT44(uRam00000001419edafc,uRam00000001419edaf8);
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b0);
  }
  FUN_140041b80(local_b0,&local_d8);
  local_80 = local_b0;
  uVar1 = (int)(DAT_1419feb78 | 0x5000000) >> 0x18 & 0xff;
  if (uVar1 == 0xf) {
    uVar1 = 0x4000004;
  }
  else {
    uVar1 = uVar1 | 0x1000000;
  }
  uStack_100 = CONCAT44(0xf,(undefined4)uStack_100);
  local_108 = (longlong *)(CONCAT44(uVar1,DAT_1419feb78) & 0xffffffff00ffffff);
  local_d8 = (longlong *)(CONCAT44(uVar1,DAT_1419feb78) & 0xffffffff00ffffff);
  uStack_d0 = CONCAT44(0xf,(undefined4)uStack_100);
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_d8);
  local_78 = local_a0;
  local_d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_d0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_70 = local_90;
  gml_Script_truestate_enqueue(param_1,param_2,&local_f8,3,&local_80);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

