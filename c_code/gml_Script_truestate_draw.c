// gml_Script_truestate_draw @ 0x14062aaa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_truestate_draw(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_70 = "gml_Script_truestate_begin_step";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x98;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x9a;
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  local_c8 = 0;
  uStack_c0 = uStack_a0;
  FUN_140041b80(&local_58,&local_c8);
  local_68 = 0x9b;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00168);
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  if (&local_a8 != puVar4) {
    local_c8 = 0;
    uStack_c0 = CONCAT44(0xd,(undefined4)uStack_a0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  local_68 = 0x9d;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  iVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,0);
  if (iVar2 == 0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00088);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_68 = 0xad;
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
      FUN_140e609c0(param_1);
      FUN_1400460e0(uVar5,uVar3);
      FUN_140e60910(1);
      local_68 = 0xae;
      uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
      local_a8 = 0;
      local_c8 = 0;
      uStack_c0 = uStack_a0;
      if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_c8);
      goto LAB_14062b2e6;
    }
  }
  local_68 = 0x9e;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00278);
  local_c8 = CONCAT44(uRam00000001419e6bd4,_DAT_1419e6bd0);
  uStack_c0 = CONCAT44(uRam00000001419e6bdc,uRam00000001419e6bd8);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  local_48 = &local_98;
  uVar5 = uVar3;
  FUN_140e63610(param_1,param_2,&local_b8,1,uVar3,&local_48);
  uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_68 = 0xa0;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fea18);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar7) {
    local_c8 = *puVar4;
    uStack_c0 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0xa1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00088);
  uStack_a0 = CONCAT44(0xd,(undefined4)uStack_a0);
  local_a8 = 0;
  if (&local_a8 != puVar4) {
    local_c8 = 0;
    uStack_c0 = CONCAT44(0xd,(undefined4)uStack_a0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  local_68 = 0xa2;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
  uStack_a0 = uStack_a0 & 0xffffffff;
  local_a8 = 0x40c3878000000000;
  iVar2 = FUN_140e851f0(uVar5,&local_a8,DAT_141955260,0);
  if ((1 << ((byte)(uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (iVar2 == 0) {
    local_68 = 0xa3;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a001f8);
    if (puVar4 != &local_98) {
      local_c8 = *puVar4;
      uStack_c0 = puVar4[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    local_48 = &local_98;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar9,DAT_1419fff98);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar5,&local_48);
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != puVar7) {
      local_c8 = *puVar4;
      uStack_c0 = puVar4[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_c8);
    }
    FUN_140e60910(1);
    local_68 = 0xa4;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
    if (puVar7 != &local_98) {
      local_c8 = *puVar7;
      uStack_c0 = puVar7[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    local_48 = &local_98;
    if (puVar4 != &local_88) {
      local_c8 = *puVar4;
      uStack_c0 = puVar4[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_c8);
    }
    local_40 = &local_88;
    FUN_140ea9150(2,&local_48);
  }
  local_68 = 0xa7;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a001f8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f2b0);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar7) {
    local_c8 = *puVar4;
    uStack_c0 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0xa8;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f2b0);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00278);
  if (puVar7 != &local_98) {
    local_c8 = *puVar7;
    uStack_c0 = puVar7[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  local_48 = &local_98;
  if (puVar4 != &local_88) {
    local_c8 = *puVar4;
    uStack_c0 = puVar4[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_40 = &local_88;
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar9,DAT_1419ff4f8),&local_48);
  if (puVar4 != puVar8) {
    local_c8 = *puVar4;
    uStack_c0 = puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0xa9;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_68 = 0xaa;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_c8 = CONCAT44(uRam00000001419e6be4,_DAT_1419e6be0);
  uStack_c0 = CONCAT44(uRam00000001419e6bec,uRam00000001419e6be8);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
  local_48 = &local_98;
  FUN_140e63610(param_1,param_2,&local_b8,1,uVar3,&local_48);
  local_68 = 0xab;
  local_a8 = 0x3ff0000000000000;
  uVar9 = (undefined4)uStack_a0;
  uStack_a0 = CONCAT44(0xd,uVar9);
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = CONCAT44(0xd,uVar9);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_c8);
LAB_14062b2e6:
  local_68 = 0xb1;
  if (&local_58 != param_3) {
    local_c8 = local_58;
    uStack_c0 = CONCAT44(uStack_4c,uStack_50);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

