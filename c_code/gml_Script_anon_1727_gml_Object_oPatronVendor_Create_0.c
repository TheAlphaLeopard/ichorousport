// gml_Script_anon_1727_gml_Object_oPatronVendor_Create_0 @ 0x140bcae20

undefined8 *
gml_Script_anon_1727_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 *puStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  byte local_44;
  undefined4 local_40 [3];
  byte local_34;
  
  local_60 = "gml_Script_anon@1390@gml_Object_oPatronVendor_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x5b;
  _eh_vector_constructor_iterator_(&local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x5c;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7228);
  FUN_140046040(uVar2);
  local_58 = 0x5e;
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
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7228);
  puVar4 = (undefined8 *)FUN_14028f0c0(param_1,param_2,&local_98,0,0);
  if (puVar4 != &local_50) {
    local_78 = (undefined8 *)*puVar4;
    puStack_70 = (undefined4 *)puVar4[1];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_78);
  }
  local_78 = &local_50;
  if (puVar3 != local_40) {
    local_88 = *puVar3;
    uStack_84 = puVar3[1];
    uStack_80 = puVar3[2];
    uStack_7c = puVar3[3];
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_88);
  }
  puStack_70 = local_40;
  puVar4 = (undefined8 *)gml_GlobalScript_PauseMenuFunctions(param_1,param_2,&local_b8,2,&local_78);
  if (puVar4 != &local_a8) {
    local_88 = *(undefined4 *)puVar4;
    uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_88);
  }
  local_58 = 0x60;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_78 = &local_a8;
  uVar2 = gml_Script_bmm_sfx_toggle_check(param_1,param_2,&local_b8,1,&local_78);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_58 = 0x61;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7278);
    if (puVar4 == param_3) goto LAB_140bcb0ee;
    local_88 = *(undefined4 *)puVar4;
    uStack_84 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_80 = *(undefined4 *)(puVar4 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
  }
  else {
    local_58 = 99;
    if (&local_a8 == param_3) goto LAB_140bcb0ee;
    local_88 = (undefined4)local_a8;
    uStack_84 = local_a8._4_4_;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_88);
LAB_140bcb0ee:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

