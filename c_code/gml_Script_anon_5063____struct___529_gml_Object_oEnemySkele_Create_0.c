// gml_Script_anon_5063____struct___529_gml_Object_oEnemySkele_Create_0 @ 0x140a68c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5063____struct___529_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 **ppuVar8;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_80 = "gml_Script_anon@4732@___struct___528@gml_Object_oEnemySkele_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xbe;
  _eh_vector_constructor_iterator_(&local_c8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xbf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar3 != &local_c8) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_70 = &local_c8;
  local_e8 = CONCAT44(uRam0000000141dc6fa4,_DAT_141dc6fa0);
  uStack_e0 = uRam0000000141dc6fa8;
  uStack_dc = uRam0000000141dc6fac;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_68 = local_b8;
  local_e8 = CONCAT44(uRam00000001419eaf64,_DAT_1419eaf60);
  uStack_e0 = uRam00000001419eaf68;
  uStack_dc = uRam00000001419eaf6c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_60 = local_a8;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_f8,3,&local_70);
  if (puVar3 != puVar4) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  FUN_140e60910(1);
  local_78 = 0xc0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_140042560(&local_d8,uVar2);
  FUN_1400460e0(uVar5,&local_d8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_78 = 0xc2;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f1e38);
  local_e8 = CONCAT44(uRam00000001419eaf54,_DAT_1419eaf50);
  uStack_e0 = uRam00000001419eaf58;
  uStack_dc = uRam00000001419eaf5c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_70 = &local_c8;
  local_e8 = CONCAT44(uRam00000001419eaff4,_DAT_1419eaff0);
  uStack_e0 = uRam00000001419eaff8;
  uStack_dc = uRam00000001419eaffc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_68 = local_b8;
  local_e8 = CONCAT44(uRam00000001419eb034,_DAT_1419eb030);
  uStack_e0 = uRam00000001419eb038;
  uStack_dc = uRam00000001419eb03c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_60 = local_a8;
  ppuVar8 = &local_70;
  FUN_140e63610(param_1,param_2,&local_f8,3,uVar6,ppuVar8);
  local_78 = 0xc4;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_38,uVar6,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  local_e8 = CONCAT44(uRam0000000141dc6fa4,_DAT_141dc6fa0);
  uStack_e0 = uRam0000000141dc6fa8;
  uStack_dc = uRam0000000141dc6fac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_e8);
  local_70 = &local_c8;
  ppuVar8 = &local_70;
  uVar6 = CONCAT44(uVar7,DAT_141a0a0d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar6,ppuVar8);
  local_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  uStack_dc = 0;
  local_e8 = 0x3fe0000000000000;
  FUN_140042560(&local_d8,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uVar1 = FUN_140e851f0(&local_38,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (uVar1 < 0x80000000) {
    local_78 = 0xc6;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    local_e8 = CONCAT44(uRam0000000141dd8ecc,_DAT_141dd8ec8);
    uStack_e0 = uRam0000000141dd8ed0;
    uStack_dc = DAT_141dd8ed4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
    local_68 = local_b8;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_98,1,&local_48,&local_68);
    local_78 = 199;
  }
  else {
    local_78 = 0xca;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_58,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    FUN_1400460e0(&local_58,uVar2);
    FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_58);
    local_78 = 0xcb;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar2,0);
    local_78 = 0xcc;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar2,0);
    local_78 = 0xcd;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_f8,0,uVar2,0);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

