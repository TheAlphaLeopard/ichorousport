// gml_Object_oShopItem_Step_0 @ 0x140d6c740

void gml_Object_oShopItem_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_f0 = "gml_Object_oShockWaveRock_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  _eh_vector_constructor_iterator_(local_a8,0x10,6,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_e8 = 4;
  local_148 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_148);
  local_48 = local_a8;
  local_148 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_140 = DAT_1419df7b8;
  uStack_13c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_148);
  local_40 = local_98;
  ppuVar4 = &local_48;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_138,2,ppuVar4);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_e8 = 6;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_e8 = 10;
  if (puVar2 != &local_108) {
    local_148 = (longlong *)*puVar2;
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
  local_e8 = 0xc;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f70a8);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uStack_13c = 6;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_b8,uVar5,in_stack_fffffffffffffeb0);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_c8,uVar5,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = (longlong *)local_b8;
    uStack_140 = uStack_b0;
    uStack_13c = uStack_ac;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_148);
    local_48 = local_a8;
    local_148 = (longlong *)local_c8;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    local_40 = local_98;
    uStack_13c = 0xf;
    local_148 = (longlong *)0x1000000000000ee;
    local_118 = 0xee;
    uStack_114 = 0x1000000;
    uStack_110 = uStack_140;
    uStack_10c = 0xf;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_118);
    local_38 = local_88;
    ppuVar4 = &local_48;
    uVar5 = CONCAT44(uVar6,DAT_141a12628);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_138,3,uVar5,ppuVar4);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_e8 = 0xe;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uStack_13c = 0xf;
      local_148 = (longlong *)0x10000000000002a;
      FUN_140e87440(&local_148,DAT_141a0a7d8,0x80000000,&local_d8,uVar5 & 0xffffffffffffff00,
                    (ulonglong)ppuVar4 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      uStack_13c = 0xf;
      local_148 = (longlong *)0x1000000000000ee;
      local_118 = 0xee;
      uStack_114 = 0x1000000;
      uStack_110 = uStack_140;
      uStack_10c = 0xf;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_118);
      local_118 = (undefined4)local_d8;
      uStack_114 = local_d8._4_4_;
      uStack_110 = uStack_d0;
      uStack_10c = uStack_cc;
      local_30 = local_78;
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_118);
      local_28 = local_68;
      uStack_13c = 0xf;
      local_148 = (longlong *)0x10000000000002a;
      local_118 = 0x2a;
      uStack_114 = 0x1000000;
      uStack_110 = uStack_140;
      uStack_10c = 0xf;
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_118);
      local_20 = local_58;
      gml_Script_draw_line_sprite(param_1,param_2,&local_128,3,&local_30);
      local_e8 = 0xf;
      puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f70a8);
      uStack_13c = 0xd;
      local_148 = (longlong *)0x3ff0000000000000;
      if (&local_148 != puVar2) {
        local_118 = 0;
        uStack_114 = 0x3ff00000;
        uStack_110 = uStack_140;
        uStack_10c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar2);
        }
        FUN_140041b80(puVar2,&local_118);
      }
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

