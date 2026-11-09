// gml_Script_anon_255_gml_Object_oBoss_Create_0 @ 0x1406f6f20

void gml_Script_anon_255_gml_Object_oBoss_Create_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar10;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ppuVar10 = &local_58;
  local_b0 = "gml_Object_oBodyPartToss_Step_0";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_a8 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_128,puVar3);
  }
  FUN_140042560(&local_128,uVar2);
  FUN_1400460e0(uVar4,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_a8 = 4;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_c8,(ulonglong)pcVar5 & 0xffffffffffffff00
                ,in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 0xf;
  local_128 = (longlong *)0x10000000000005b;
  uVar8 = param_2;
  FUN_140e87170(&local_128,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_c8;
  uStack_120 = uStack_c0;
  uStack_11c = uStack_bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_58 = local_f8;
  local_128 = local_68;
  uStack_120 = uStack_60;
  uStack_11c = uStack_5c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_50 = local_e8;
  if (puVar3 != &local_d8) {
    local_128 = (longlong *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  local_48 = &local_d8;
  ppuVar6 = ppuVar10;
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_118,3,ppuVar10);
  if (puVar3 != &local_108) {
    local_128 = (longlong *)*puVar3;
    uStack_120 = *(undefined4 *)(puVar3 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_108);
  local_a8 = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_a0,uVar7,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400460e0(&local_a0,uVar2);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
  local_a8 = 7;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_c8,uVar7,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_78,uVar7,uVar8 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = local_c8;
  uStack_120 = uStack_c0;
  uStack_11c = uStack_bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_58 = local_f8;
  local_128 = local_78;
  uStack_120 = uStack_70;
  uStack_11c = uStack_6c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_50 = local_e8;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x10000000000005b;
  local_38 = 0x5b;
  uStack_34 = 0x1000000;
  uStack_30 = uStack_120;
  uStack_2c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_38);
  local_48 = &local_d8;
  uVar8 = CONCAT44(uVar9,DAT_141a12628);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_118,3,uVar8,ppuVar10);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_a8 = 9;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_a8 = 10;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_11c = 0xf;
    local_128 = (longlong *)0x10000000000005b;
    FUN_140e87440(&local_128,DAT_141a05208,0x80000000,&local_90,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    uStack_11c = 0xf;
    local_128 = (longlong *)0x10000000000005b;
    uVar2 = FUN_140069500(&local_128);
    FUN_140e63610(uVar2,param_2,&local_118,0,&local_90,0);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}

