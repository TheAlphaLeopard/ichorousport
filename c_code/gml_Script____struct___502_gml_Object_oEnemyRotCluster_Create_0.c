// gml_Script____struct___502_gml_Object_oEnemyRotCluster_Create_0 @ 0x140a1ec90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___502_gml_Object_oEnemyRotCluster_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar8;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_80 = "gml_Script_anon@2873@___struct___502@gml_Object_oEnemyRotCluster_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x8c;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x8d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09808);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09808);
  if (puVar3 != &local_b8) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  local_60 = &local_b8;
  local_e8 = CONCAT44(uRam00000001419ead24,_DAT_1419ead20);
  uStack_e0 = uRam00000001419ead28;
  uStack_dc = uRam00000001419ead2c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_58 = local_a8;
  local_e8 = CONCAT44(uRam00000001419ead34,_DAT_1419ead30);
  uStack_e0 = uRam00000001419ead38;
  uStack_dc = uRam00000001419ead3c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_50 = local_98;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_f8,3,CONCAT44(uVar8,DAT_141a00c58),&local_60);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_140042560(&local_d8,uVar2);
  if (&local_d8 != puVar4) {
    local_e8 = local_d8;
    uStack_e0 = uStack_d0;
    uStack_dc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e60910(1);
  local_78 = 0x8f;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar5,0);
  local_78 = 0x90;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  uVar9 = 0;
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar5,0);
  local_78 = 0x91;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_dc = 0xf;
  local_e8 = 0x100000000000149;
  local_d8 = 0x100000000000149;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_d8);
  local_60 = &local_b8;
  ppuVar6 = &local_60;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_f8,1,ppuVar6);
  local_78 = 0x93;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_38,uVar7,uVar9 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_e8 = CONCAT44(uRam0000000141dc6f34,_DAT_141dc6f30);
  uStack_e0 = uRam0000000141dc6f38;
  uStack_dc = uRam0000000141dc6f3c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_e8);
  local_60 = &local_b8;
  ppuVar6 = &local_60;
  uVar9 = CONCAT44(uVar8,DAT_141a0a0d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar9,ppuVar6);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  uStack_dc = 0;
  local_e8 = 0x3fe8000000000000;
  FUN_140042560(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar1 = FUN_140e851f0(&local_38,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (uVar1 < 0x80000000) {
    local_78 = 0x95;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_48,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    local_e8 = CONCAT44(uRam0000000141dd8cbc,_DAT_141dd8cb8);
    uStack_e0 = uRam0000000141dd8cc0;
    uStack_dc = DAT_141dd8cc4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
    local_58 = local_a8;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_c8,1,&local_48,&local_58);
    local_78 = 0x96;
  }
  else {
    local_78 = 0x99;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_70,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    FUN_1400460e0(&local_70,uVar2);
    FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_70);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

