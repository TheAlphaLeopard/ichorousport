// gml_Script____struct___133_anon_3694_anon_2320____struct___129_JUKEBOX_system @ 0x140394e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___133_anon_3694_anon_2320____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  undefined8 uVar9;
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
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_70 = "gml_Script_anon@3366@anon@2320@___struct___129@JUKEBOX_system";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x80;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x81;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
  uStack_dc = 0;
  local_e8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    if (puVar4 != &local_c8) {
      local_e8 = (undefined1 *)*puVar4;
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    local_60 = &local_c8;
    uVar9 = CONCAT44(uVar10,DAT_141a07888);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar9,&local_60);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_68 = 0x81;
      goto LAB_14039524b;
    }
  }
  local_68 = 0x82;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f49f8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c28);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4928);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b68);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ae8);
  if (puVar4 != &local_c8) {
    local_e8 = (undefined1 *)*puVar4;
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_60 = &local_c8;
  local_e8 = (undefined1 *)CONCAT44(uRam00000001419e4674,_DAT_1419e4670);
  uStack_e0 = uRam00000001419e4678;
  uStack_dc = uRam00000001419e467c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_58 = local_b8;
  if (puVar5 != &local_a8) {
    local_e8 = (undefined1 *)*puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_50 = &local_a8;
  if (puVar6 != &local_98) {
    local_e8 = (undefined1 *)*puVar6;
    uStack_e0 = *(undefined4 *)(puVar6 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  local_48 = &local_98;
  if (puVar7 != &local_88) {
    local_e8 = (undefined1 *)*puVar7;
    uStack_e0 = *(undefined4 *)(puVar7 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
  }
  local_40 = &local_88;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,5,CONCAT44(uVar10,DAT_141a0a2e8),&local_60);
  if (puVar4 != puVar8) {
    local_e8 = (undefined1 *)*puVar4;
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_e8);
  }
  FUN_140e60910(1);
  local_68 = 0x83;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
LAB_14039524b:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

