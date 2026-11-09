// gml_Script_anon_2816_gml_Object_oEnemyDamsel_Create_0 @ 0x1409783f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2816_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_70 = "gml_Script_anon@2473@gml_Object_oEnemyDamsel_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x7b;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x7c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0638);
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0638);
    if (puVar3 != &local_b8) {
      local_38 = *puVar3;
      uStack_30 = *(undefined4 *)(puVar3 + 1);
      uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_38);
    }
    local_60 = &local_b8;
    uVar7 = CONCAT44(uVar8,DAT_141a07888);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar7,&local_60);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_68 = 0x7c;
      goto LAB_140978836;
    }
  }
  local_68 = 0x7d;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0638);
  uStack_2c = 0xf;
  local_38 = 0x100000200000058;
  local_c8 = 0x58;
  uStack_c4 = 0x1000002;
  uStack_c0 = uStack_30;
  uStack_bc = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_c8);
  local_60 = &local_b8;
  local_c8 = _DAT_1419ea5f0;
  uStack_c4 = uRam00000001419ea5f4;
  uStack_c0 = uRam00000001419ea5f8;
  uStack_bc = uRam00000001419ea5fc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_58 = local_a8;
  local_c8 = _DAT_1419df7c0;
  uStack_c4 = uRam00000001419df7c4;
  uStack_c0 = uRam00000001419df7c8;
  uStack_bc = uRam00000001419df7cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_c8);
  local_50 = local_98;
  local_c8 = _DAT_141dc6e70;
  uStack_c4 = uRam0000000141dc6e74;
  uStack_c0 = uRam0000000141dc6e78;
  uStack_bc = uRam0000000141dc6e7c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_c8);
  local_48 = local_88;
  FUN_140e609c0(param_1);
  uVar4 = CONCAT44(uVar8,DAT_141a0a2e8);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_d8,4,uVar4,&local_60);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar6 != puVar5) {
    local_c8 = *puVar6;
    uStack_c4 = puVar6[1];
    uStack_c0 = puVar6[2];
    uStack_bc = puVar6[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0x7e;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0898);
  if (puVar3 != &local_b8) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_c8);
  }
  local_60 = &local_b8;
  local_c8 = _DAT_1419ea680;
  uStack_c4 = uRam00000001419ea684;
  uStack_c0 = uRam00000001419ea688;
  uStack_bc = uRam00000001419ea68c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c8);
  local_58 = local_a8;
  if (puVar5 != local_98) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_c8);
  }
  local_50 = local_98;
  FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar8,DAT_1419f4a48),&local_60);
LAB_140978836:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

