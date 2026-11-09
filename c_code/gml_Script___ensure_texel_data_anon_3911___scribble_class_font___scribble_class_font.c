// gml_Script___ensure_texel_data_anon_3911___scribble_class_font___scribble_class_font @ 0x1401455e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___ensure_texel_data_anon_3911___scribble_class_font___scribble_class_font
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___clear@anon@2881@__scribble_class_font@__scribble_class_font";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x51;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x53;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06338);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_38 = 0x53;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    local_68 = CONCAT44(uRam0000000141dcb7dc,_DAT_141dcb7d8);
    uStack_60 = uRam0000000141dcb7e0;
    uStack_5c = DAT_141dcb7e4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_68);
    local_res8 = &local_78;
    ppuVar4 = &local_res8;
    FUN_1401ef7f0(param_1,param_2,&local_88,1,ppuVar4);
    uVar5 = (undefined4)((ulonglong)ppuVar4 >> 0x20);
  }
  local_38 = 0x55;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06148);
  if (puVar3 != &local_78) {
    local_68 = *puVar3;
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_68);
  }
  local_res8 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar5,DAT_141a06308),&local_res8);
  local_38 = 0x57;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe3f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x58;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06138);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar3) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

