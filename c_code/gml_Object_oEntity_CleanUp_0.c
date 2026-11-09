// gml_Object_oEntity_CleanUp_0 @ 0x140ac8f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEntity_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  
  local_c0 = "gml_Object_oEntity_Draw_0";
  local_b8 = 0;
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = (undefined1 *)0x0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_b8 = 2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar3,DAT_1419f2958,0x80000000,&local_f8,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  ppuVar8 = (undefined1 **)0x0;
  ppuVar6 = &local_f8;
  uVar3 = FUN_140e63610(uVar3,param_2,&local_128,0,ppuVar6,0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 3;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
    uVar9 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f2978,0x80000000,&local_98,uVar9,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar9 >> 0x20);
    local_88 = local_98;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_88);
    local_38 = local_78;
    uStack_7c = 0xf;
    local_88 = 0x100000100000032;
    local_e8 = (undefined8 *)0x100000100000032;
    uStack_e0 = (char *)CONCAT44(0xf,uStack_80);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_e8);
    local_30 = local_68;
    ppuVar8 = &local_38;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar7,DAT_1419fe728),ppuVar8);
    if (puVar4 != &local_58) {
      local_e8 = (undefined8 *)*puVar4;
      uStack_e0 = (char *)puVar4[1];
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_e8);
    }
    local_e8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_e0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    local_28 = &local_58;
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140041b80(local_48,&local_e8);
    local_20 = local_48;
    ppuVar6 = &local_30;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_118,3,ppuVar6);
  }
  local_b8 = 8;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_141a05028,0x80000000,&local_b0,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar9 = 0;
  puVar4 = &local_b0;
  FUN_140e63610(uVar3,param_2,&local_128,0,puVar4,0);
  local_b8 = 10;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar3,DAT_1419f2958,0x80000000,&local_f8,(ulonglong)puVar4 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar3 = FUN_140e63610(uVar3,param_2,&local_128,0,&local_f8,0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_b8 = 0xb;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_110 = 0;
    uStack_e0 = "gml_Script_pal_swap_reset";
    local_e8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_e8;
    local_10c = 5;
    local_118 = 0;
    local_d8 = 0x71;
    iVar2 = FUN_140ec9d80();
    if (iVar2 != -1) {
      local_d8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_e8;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return;
}

