// gml_Script_anon_8658___InputGamepadTransformQuirks___InputGamepadTransformQuirks @ 0x140093b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8658___InputGamepadTransformQuirks___InputGamepadTransformQuirks
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined4 local_50 [3];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined4 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Script_anon@8348@__InputGamepadTransformQuirks@__InputGamepadTransformQuirks";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x97;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x97;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1f8);
  if (puVar1 != local_50) {
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_98);
  }
  local_28 = local_50;
  local_98 = _DAT_1419dfec0;
  uStack_94 = uRam00000001419dfec4;
  uStack_90 = uRam00000001419dfec8;
  uStack_8c = uRam00000001419dfecc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_98);
  local_20 = local_40;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,2,CONCAT44(uVar3,DAT_141a01318),&local_28);
  if (puVar2 != param_3) {
    local_98 = *(undefined4 *)puVar2;
    uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

