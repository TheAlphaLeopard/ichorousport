// gml_Object_oParInteractable_Draw_0 @ 0x140bae2c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParInteractable_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_70 = "gml_Object_oParInteractable_Step_2";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_68 = 2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56c20);
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56be0);
  if (puVar5 != &local_a8) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_60 = &local_a8;
  uVar4 = FUN_140e63610(local_res8,local_res10,&local_d8,1,uVar4,&local_60);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_e8 = CONCAT44(uRam00000001419ec814,_DAT_1419ec810);
    uStack_e0 = uRam00000001419ec818;
    uStack_dc = uRam00000001419ec81c;
    if ((1 << ((byte)_local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
    local_58 = local_98;
    local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << ((byte)_local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
    local_50 = &local_88;
    uVar4 = gml_Script_InputPressedMany(local_res8,local_res10,&local_b8,2,&local_58);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_68 = 4;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56bb0);
      FUN_140e63610(local_res8,local_res10,&local_c8,0,uVar4,0);
      local_68 = 5;
      uStack_dc = 0xf;
      local_e8 = 0x1000000000000d6;
      iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_e8);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (0 < iVar2) {
        do {
          local_68 = 6;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56bc0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x4024000000000000;
          cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_48,&local_res8,&local_res10);
      if (local_38 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_68 = 9;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56bc0);
  puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56bc0);
  if (puVar5 != &local_a8) {
    local_e8 = *puVar5;
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_60 = &local_a8;
  local_e8 = CONCAT44(uRam0000000141dc7374,_DAT_141dc7370);
  uStack_e0 = uRam0000000141dc7378;
  uStack_dc = uRam0000000141dc737c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_58 = local_98;
  if (puVar3 != &local_88) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
  }
  local_50 = &local_88;
  FUN_140e609c0(local_res8);
  puVar3 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_d8,3,&local_60);
  if (puVar3 != puVar6) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}

