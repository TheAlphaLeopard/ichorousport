// gml_Script_anon_3591____struct___795_gml_Object_oShopSalesman_Create_0 @ 0x140d7e170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3591____struct___795_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 **ppuVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Script_anon@3244@___struct___795@gml_Object_oShopSalesman_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x9a;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x9b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_1419ff778,0x80000000,&local_98,(ulonglong)pcVar8 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  cVar3 = FUN_140e491e0(&local_98);
  if (cVar3 == '\0') {
    local_9c = DAT_141ddb754;
    local_a0 = DAT_141ddb750;
    if ((1 << ((byte)DAT_141ddb754 & 0x1f) & 0x46U) == 0) {
      local_a8 = DAT_141ddb748;
    }
    else {
      FUN_1400419b0(&local_a8,&DAT_141ddb748);
    }
    puVar5 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_cc = DAT_141ddb7c4;
    uStack_d0 = DAT_141ddb7c0;
    if ((1 << ((byte)DAT_141ddb7c4 & 0x1f) & 0x46U) == 0) {
      local_d8 = DAT_141ddb7b8;
    }
    else {
      FUN_1400419b0(&local_d8,&DAT_141ddb7b8);
    }
    puVar5 = &local_d8;
    bVar2 = true;
    bVar1 = false;
  }
  local_c8 = *(undefined4 *)puVar5;
  uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_c8);
  if (bVar1) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  local_78 = 0x9c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7008);
  local_40 = &local_b8;
  FUN_140e609c0(param_1);
  ppuVar9 = &local_40;
  puVar7 = (undefined4 *)gml_Script_CreateBossUi(param_1,param_2,&local_e8,1,ppuVar9);
  uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
  if (puVar7 != puVar6) {
    local_c8 = *puVar7;
    uStack_c4 = puVar7[1];
    uStack_c0 = puVar7[2];
    uStack_bc = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_c8);
  }
  FUN_140e60910(1);
  local_78 = 0x9d;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_cc = 0xf;
  local_d8 = 0x100000200000144;
  local_c8 = 0x144;
  uStack_c4 = 0x1000002;
  uStack_c0 = uStack_d0;
  uStack_bc = 0xf;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
  local_40 = &local_70;
  local_c8 = _DAT_1419edd00;
  uStack_c4 = uRam00000001419edd04;
  uStack_c0 = uRam00000001419edd08;
  uStack_bc = uRam00000001419edd0c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_c8);
  local_38 = local_60;
  local_c8 = _DAT_1419df7a0;
  uStack_c4 = uRam00000001419df7a4;
  uStack_c0 = uRam00000001419df7a8;
  uStack_bc = uRam00000001419df7ac;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_c8);
  local_30 = local_50;
  FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar10,DAT_141a0a2e8),&local_40);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

