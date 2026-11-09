// gml_Script_animation_wave_anon_38509___scribble_class_element___scribble_class_element @ 0x14012bc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_animation_wave_anon_38509___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined8 **ppuVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_is_animated@anon@38119@__scribble_class_element@__scribble_class_element";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x4c6;
  _eh_vector_constructor_iterator_(&local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x4c8;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_58 = _DAT_1419df7c0;
  uStack_54 = uRam00000001419df7c4;
  uStack_50 = uRam00000001419df7c8;
  uStack_4c = uRam00000001419df7cc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_58);
  local_res8 = &local_68;
  puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_98,1,uVar2,&local_res8);
  uVar5 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar3 != &local_88) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
  }
  local_38 = 0x4c9;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_res8 = &local_88;
  ppuVar6 = &local_res8;
  uVar4 = CONCAT44(uVar5,DAT_1419fcb88);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_98,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 0x4c9;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_38 = 0x4cb;
    FUN_140e87440(&local_88,DAT_141a04fc8,0x80000000,&local_78,uVar4 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    if (&local_78 != param_3) {
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_58);
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

