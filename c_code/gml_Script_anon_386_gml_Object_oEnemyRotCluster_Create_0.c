// gml_Script_anon_386_gml_Object_oEnemyRotCluster_Create_0 @ 0x140a19870

void gml_Script_anon_386_gml_Object_oEnemyRotCluster_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90 [3];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined4 local_70 [3];
  byte local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  
  local_a0 = "gml_Object_oEnemyMoistMarauder_Draw_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_98 = 3;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f16d8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f16c8);
  if (puVar1 != local_90) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_118);
  }
  local_48 = local_90;
  uVar4 = CONCAT44(uVar6,DAT_141a00d78);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar4,&local_48);
  uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_128,puVar3);
  }
  FUN_140042560(&local_128,uVar2);
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_118);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_98 = 4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (puVar1 != local_90) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_118);
  }
  local_48 = local_90;
  ppuVar7 = &local_48;
  uVar5 = CONCAT44(uVar6,DAT_141a00e28);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar5,ppuVar7);
  uStack_11c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_120 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_128,puVar3);
  }
  FUN_140042560(&local_128,uVar2);
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_118);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_98 = 5;
  uStack_11c = 6;
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_e8,uVar5,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400460e0(&local_e8,&local_b8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_e8);
  local_98 = 6;
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_f8,uVar5,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400460e0(&local_f8,&local_c8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_f8);
  local_98 = 7;
  FUN_140e98b30(param_1,param_2);
  local_98 = 8;
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_e8,uVar5,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400462a0(&local_e8,&local_b8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_e8);
  local_98 = 9;
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_f8,uVar5,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_1400462a0(&local_f8,&local_c8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_f8);
  local_98 = 0xb;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uStack_11c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_58,uVar5,uVar8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = 6;
  uVar5 = uVar5 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe158,0x80000000,&local_d8,uVar5,uVar8 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_118 = (undefined4)local_58;
  uStack_114 = local_58._4_4_;
  uStack_110 = uStack_50;
  uStack_10c = uStack_4c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_118);
  local_48 = local_90;
  uStack_11c = local_cc;
  uStack_120 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_128 = local_d8;
  }
  else {
    FUN_1400419b0(&local_128,&local_d8);
  }
  uStack_10c = 7;
  local_118 = 0x20;
  FUN_1400462a0(&local_128,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = (undefined4)local_128;
  uStack_114 = local_128._4_4_;
  uStack_110 = uStack_120;
  uStack_10c = uStack_11c;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_118);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_40 = local_80;
  if (puVar1 != local_70) {
    local_118 = *puVar1;
    uStack_114 = puVar1[1];
    uStack_110 = puVar1[2];
    uStack_10c = puVar1[3];
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_118);
  }
  local_38 = local_70;
  FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar6,DAT_141a04598),&local_48);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}

