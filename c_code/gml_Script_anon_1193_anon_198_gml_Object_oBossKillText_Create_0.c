// gml_Script_anon_1193_anon_198_gml_Object_oBossKillText_Create_0 @ 0x14079fd60

undefined8 *
gml_Script_anon_1193_anon_198_gml_Object_oBossKillText_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  
  local_60 = "gml_Script_anon@418@anon@198@gml_Object_oBossKillText_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x17;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x18;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08b88);
  if (puVar1 != local_50) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  uVar3 = CONCAT44(uVar4,DAT_141a0a9e8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,&local_88);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_98) {
    local_78 = *(undefined4 *)puVar2;
    uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_78);
  }
  local_58 = 0x19;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  if (puVar1 != local_50) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  local_80 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar4,DAT_1419fe568),&local_88);
  local_58 = 0x1a;
  if (&local_98 != param_3) {
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

