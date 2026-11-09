// gml_Object_oPoisonRing_Create_0 @ 0x140c9c330

void gml_Object_oPoisonRing_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_Object_oPlayerTendrils_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_88 = 5;
  local_f8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_80 = local_d8;
  local_f8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_78 = local_c8;
  ppuVar4 = &local_80;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_e8,2,ppuVar4);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_88 = 7;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_88 = 8;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9218);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      local_88 = 10;
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x1000000000000ee;
      in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
      ppuVar4 = (undefined1 **)((ulonglong)ppuVar4 & 0xffffffffffffff00);
      FUN_140e87440(&local_f8,DAT_141a1f090,0x80000000,&local_68,ppuVar4,in_stack_ffffffffffffff00);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uStack_ec = 0;
      local_f8 = (longlong *)0x4000000000000000;
      FUN_1400462a0(&local_68,&local_f8);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x1000000000000ee;
      FUN_140e87930(&local_f8,DAT_141a1f090,0x80000000,&local_68);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
    }
  }
  local_88 = 0x10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_ec = 6;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_38,uVar5,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_48,uVar5,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = (longlong *)local_38;
  uStack_f0 = uStack_30;
  uStack_ec = uStack_2c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_80 = local_d8;
  local_f8 = (longlong *)local_48;
  uStack_f0 = uStack_40;
  uStack_ec = uStack_3c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_78 = local_c8;
  uStack_ec = 0xf;
  local_f8 = (longlong *)0x1000000000000b8;
  local_a8 = 0xb8;
  uStack_a4 = 0x1000000;
  uStack_a0 = uStack_f0;
  uStack_9c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_a8);
  local_70 = local_b8;
  ppuVar4 = &local_80;
  uVar5 = CONCAT44(uVar6,DAT_141a12628);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_e8,3,uVar5,ppuVar4);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9218);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      local_88 = 0x12;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9218);
      uStack_ec = 0xd;
      local_f8 = (longlong *)0x3ff0000000000000;
      if (&local_f8 != puVar3) {
        local_a8 = 0;
        uStack_a4 = 0x3ff00000;
        uStack_a0 = uStack_f0;
        uStack_9c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_a8);
      }
      local_88 = 0x13;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x1000000000000ee;
      FUN_140e87440(&local_f8,DAT_141a0a7d8,0x80000000,&local_58,uVar5 & 0xffffffffffffff00,
                    (ulonglong)ppuVar4 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x1000000000000b8;
      local_a8 = 0xb8;
      uStack_a4 = 0x1000000;
      uStack_a0 = uStack_f0;
      uStack_9c = 0xf;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_a8);
      local_80 = local_d8;
      local_a8 = (undefined4)local_58;
      uStack_a4 = local_58._4_4_;
      uStack_a0 = uStack_50;
      uStack_9c = uStack_4c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_a8);
      local_78 = local_c8;
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x1000000000000ee;
      local_a8 = 0xee;
      uStack_a4 = 0x1000000;
      uStack_a0 = uStack_f0;
      uStack_9c = 0xf;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_a8);
      local_70 = local_b8;
      gml_Script_draw_line_sprite(param_1,param_2,&local_e8,3,&local_80);
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

