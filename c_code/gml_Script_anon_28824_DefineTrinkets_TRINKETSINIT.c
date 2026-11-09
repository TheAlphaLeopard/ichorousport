// gml_Script_anon_28824_DefineTrinkets_TRINKETSINIT @ 0x140606f10

undefined8 *
gml_Script_anon_28824_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined4 *local_38 [2];
  
  local_70 = "gml_Script_anon@28602@DefineTrinkets@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x424;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ffd48);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x425;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,gml_Script_anon_28698_DefineTrinkets_TRINKETSINIT,0);
  if (&local_98 != puVar1) {
    local_a8 = local_98;
    uStack_a4 = uStack_94;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_50) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_38[0] = local_50;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar4,DAT_1419fd6d8),local_38);
  if (puVar3 != &local_b8) {
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_a8);
  }
  FUN_140e87930(uVar2,DAT_1419f5f98,0x80000000,&local_b8);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

