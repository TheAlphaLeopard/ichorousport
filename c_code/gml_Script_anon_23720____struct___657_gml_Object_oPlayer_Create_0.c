// gml_Script_anon_23720____struct___657_gml_Object_oPlayer_Create_0 @ 0x140c0db90

undefined8 *
gml_Script_anon_23720____struct___657_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar7;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40 [3];
  
  local_b0 = "gml_Script_anon@23491@___struct___656@gml_Object_oPlayer_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x49a;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_94 = 0xffffff;
  local_a0 = (undefined1 *)0x0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x49c;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  ppuVar7 = (undefined1 **)(in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_90,(ulonglong)pcVar5 & 0xffffffffffffff00,
                ppuVar7);
  uStack_ec = 0;
  local_f8 = 0x404e000000000000;
  uVar2 = FUN_140e851f0(&local_90,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (uVar2 < 0x80000000) {
    local_a8 = 0x49e;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0x3fd999999999999a;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
    local_a8 = 0x49f;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *puVar4 = 0;
  }
  else {
    local_a8 = 0x4a2;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
    uVar3 = FUN_140e794b0(0,0x3ff0000000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *puVar4 = uVar3;
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  local_a8 = 0x4a4;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_f8);
  local_50 = local_80;
  local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_f8);
  local_48 = local_70;
  ppuVar6 = &local_50;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_d8,2,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_a8 = 0x4a6;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_a0,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    local_f8 = CONCAT44(DAT_141dda818._4_4_,(undefined4)DAT_141dda818);
    uStack_f0 = DAT_141dda820;
    uStack_ec = DAT_141dda824;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_f8);
    local_40[0] = local_60;
    uVar3 = FUN_140069500(uVar3);
    ppuVar7 = local_40;
    ppuVar6 = &local_a0;
    FUN_140e63610(uVar3,param_2,&local_e8,1,ppuVar6,ppuVar7);
  }
  local_a8 = 0x4a9;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_108,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar7 & 0xffffffffffffff00);
  uVar2 = local_fc & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_108 = (double)FUN_140e4b060(&local_108);
      local_fc = 0;
    }
    else {
      if (uVar2 == 7) {
        local_108 = (double)CONCAT44(local_108._4_4_,local_108._0_4_ + 1);
        goto LAB_140c0e00b;
      }
      if (uVar2 == 10) {
        local_108 = (double)((longlong)local_108 + 1);
        goto LAB_140c0e00b;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_108,&local_108);
        goto LAB_140c0e00b;
      }
      local_fc = 0;
    }
  }
  local_108 = local_108 + 1.0;
LAB_140c0e00b:
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_108);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

