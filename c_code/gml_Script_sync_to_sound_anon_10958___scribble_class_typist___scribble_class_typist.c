// gml_Script_sync_to_sound_anon_10958___scribble_class_typist___scribble_class_typist @ 0x1401693f0

undefined8 *
gml_Script_sync_to_sound_anon_10958___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_res18;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = 
  "gml_Script_get_text_element@anon@10662@__scribble_class_typist@__scribble_class_typist";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x17e;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x180;
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
  if (puVar4 != &local_78) {
    local_88 = *puVar4;
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_88);
  }
  local_res18 = &local_78;
  ppuVar8 = &local_res18;
  uVar6 = CONCAT44(uVar7,DAT_141a04538);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_68,1,uVar6,ppuVar8);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_8c = DAT_1419df7bc;
    local_90 = DAT_1419df7b8;
    if ((1 << ((byte)DAT_1419df7bc & 0x1f) & 0x46U) == 0) {
      local_98 = DAT_1419df7b0;
    }
    else {
      FUN_1400419b0(&local_98,&DAT_1419df7b0);
    }
    puVar4 = &local_98;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
    FUN_140e87440(uVar5,DAT_141a05da8,0x80000000,&local_a8,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uStack_7c = local_9c;
    uStack_80 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_88 = local_a8;
    }
    else {
      FUN_1400419b0(&local_88,&local_a8);
    }
    puVar4 = &local_88;
  }
  if (puVar4 != param_3) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if (bVar1) {
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

