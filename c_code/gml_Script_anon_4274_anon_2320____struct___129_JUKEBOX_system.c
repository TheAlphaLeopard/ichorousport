// gml_Script_anon_4274_anon_2320____struct___129_JUKEBOX_system @ 0x140395740

undefined8 *
gml_Script_anon_4274_anon_2320____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_70 = "gml_Script_anon@3928@anon@3694@anon@2320@___struct___129@JUKEBOX_system";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x8f;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x90;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4e18);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4998);
  cVar4 = FUN_140e491e0(uVar5);
  if (cVar4 == '\0') {
    uStack_ac = 0;
    local_b8 = 0;
    puVar7 = &local_b8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4a28);
    if (puVar7 != &local_98) {
      local_b8 = *puVar7;
      uStack_b0 = *(undefined4 *)(puVar7 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_b8);
    }
    local_58 = &local_98;
    uVar5 = CONCAT44(uVar9,DAT_141a076c8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_88,1,uVar5,&local_58);
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_c8 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_c8,puVar7);
    }
    puVar7 = &local_c8;
    bVar2 = true;
    bVar1 = false;
  }
  uVar3 = uStack_ac;
  local_50 = *(undefined4 *)puVar7;
  uStack_4c = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_48 = *(undefined4 *)(puVar7 + 1);
  uStack_44 = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_50);
  if (bVar1) {
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e87930(uVar6,DAT_1419f4b68,0x80000000,&local_d8);
  local_68 = 0x91;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4a28);
  if (puVar8 != local_a8) {
    local_50 = *puVar8;
    uStack_4c = puVar8[1];
    uStack_48 = puVar8[2];
    uStack_44 = puVar8[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_50);
  }
  local_60 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar9,DAT_141a07788),&local_60);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

