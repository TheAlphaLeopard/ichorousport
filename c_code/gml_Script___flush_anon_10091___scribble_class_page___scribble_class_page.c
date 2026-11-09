// gml_Script___flush_anon_10091___scribble_class_page___scribble_class_page @ 0x14015ff70

undefined8 *
gml_Script___flush_anon_10091___scribble_class_page___scribble_class_page
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  longlong **local_40;
  undefined8 *local_38;
  undefined4 *local_30;
  
  local_50 = "gml_Script___ensure_glyph_grid@anon@9206@__scribble_class_page@__scribble_class_page";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xe0;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xe2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066a8);
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_48 = 0xe4;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06818);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066a8);
    FUN_140e609c0(param_1);
    uVar2 = FUN_140e4a740(uVar4);
    puVar6 = (undefined4 *)FUN_140ea89f0(&local_b8,uVar2,6);
    if (puVar6 != puVar5) {
      local_a8 = *puVar6;
      uStack_a4 = puVar6[1];
      uStack_a0 = puVar6[2];
      uStack_9c = puVar6[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_a8);
    }
    FUN_140e60910(1);
    local_48 = 0xe7;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07548);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_7c = 6;
    local_88 = param_1;
    uVar4 = FUN_140e5c910();
    FUN_140e42c10(uVar4,param_1);
    local_40 = &local_88;
    if (puVar3 != &local_78) {
      local_a8 = *(undefined4 *)puVar3;
      uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_a0 = *(undefined4 *)(puVar3 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
    }
    local_38 = &local_78;
    uVar4 = CONCAT44(uVar8,DAT_141a04a48);
    puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar4,&local_40);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar5 != local_68) {
      local_a8 = *puVar5;
      uStack_a4 = puVar5[1];
      uStack_a0 = puVar5[2];
      uStack_9c = puVar5[3];
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_a8);
    }
    local_30 = local_68;
    uVar4 = CONCAT44(uVar8,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_b8,2,uVar4,&local_38);
    uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_48 = 0xe8;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066a8);
    pplVar7 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a07238);
    if (pplVar7 != &local_88) {
      local_a8 = *(undefined4 *)pplVar7;
      uStack_a4 = *(undefined4 *)((longlong)pplVar7 + 4);
      uStack_a0 = *(undefined4 *)(pplVar7 + 1);
      uStack_9c = *(undefined4 *)((longlong)pplVar7 + 0xc);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_a8);
    }
    local_40 = &local_88;
    if (puVar3 != &local_78) {
      local_a8 = *(undefined4 *)puVar3;
      uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_a0 = *(undefined4 *)(puVar3 + 1);
      uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
    }
    local_38 = &local_78;
    FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar8,DAT_1419fe568),&local_40);
  }
  local_48 = 0xeb;
  if (puVar3 != param_3) {
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

