// gml_Script_anon_3566_anon_2320____struct___129_JUKEBOX_system @ 0x140394690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3566_anon_2320____struct___129_JUKEBOX_system
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
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_80 = "gml_Script_anon@2982@anon@2320@___struct___129@JUKEBOX_system";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x75;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x76;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
  uStack_ec = 0;
  local_f8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar3,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    if (puVar4 != &local_d8) {
      local_f8 = (undefined1 *)*puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_f8);
    }
    local_70 = &local_d8;
    uVar9 = CONCAT44(uVar10,DAT_141a07888);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_78 = 0x76;
      goto LAB_140394db1;
    }
  }
  local_78 = 0x77;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f49f8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c28);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4928);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b68);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ae8);
  if (puVar4 != &local_d8) {
    local_f8 = (undefined1 *)*puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_70 = &local_d8;
  local_f8 = (undefined1 *)CONCAT44(uRam00000001419e4674,_DAT_1419e4670);
  uStack_f0 = uRam00000001419e4678;
  uStack_ec = uRam00000001419e467c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_f8);
  local_68 = &local_c8;
  if (puVar5 != &local_b8) {
    local_f8 = (undefined1 *)*puVar5;
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_60 = &local_b8;
  if (puVar6 != &local_a8) {
    local_f8 = (undefined1 *)*puVar6;
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  local_58 = &local_a8;
  if (puVar7 != &local_98) {
    local_f8 = (undefined1 *)*puVar7;
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  local_50 = &local_98;
  FUN_140e609c0(param_1);
  uVar3 = CONCAT44(uVar10,DAT_141a0a2e8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,5,uVar3,&local_70);
  uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != puVar8) {
    local_f8 = (undefined1 *)*puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_f8);
  }
  FUN_140e60910(1);
  local_78 = 0x78;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_78 = 0x79;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4c58);
  uStack_ec = 0;
  local_f8 = (undefined1 *)0x0;
  iVar2 = FUN_140e851f0(uVar3,&local_f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (0 < iVar2) {
    local_78 = 0x7a;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    if (puVar4 != &local_d8) {
      local_f8 = (undefined1 *)*puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_f8);
    }
    local_70 = &local_d8;
    local_f8 = (undefined1 *)CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_f0 = uRam0000000141dc6518;
    uStack_ec = uRam0000000141dc651c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    local_68 = &local_c8;
    local_f8 = (undefined1 *)CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_f0 = uRam0000000141dc6518;
    uStack_ec = uRam0000000141dc651c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_60 = &local_b8;
    uVar3 = CONCAT44(uVar10,DAT_1419f4a48);
    FUN_140e634e0(param_1,param_2,&local_e8,3,uVar3,&local_70);
    uVar10 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_78 = 0x7b;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4ae8);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4928);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4c58);
    if (puVar4 != &local_d8) {
      local_f8 = (undefined1 *)*puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_f8);
    }
    local_70 = &local_d8;
    if (puVar5 != &local_c8) {
      local_f8 = (undefined1 *)*puVar5;
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    local_68 = &local_c8;
    if (puVar6 != &local_b8) {
      local_f8 = (undefined1 *)*puVar6;
      uStack_f0 = *(undefined4 *)(puVar6 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_f8);
    }
    local_60 = &local_b8;
    FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar10,DAT_1419f4a48),&local_70);
  }
LAB_140394db1:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

