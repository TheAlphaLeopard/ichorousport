// gml_Script_anon_31215_SnowState_SnowState @ 0x140510ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_31215_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60 [3];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  
  local_70 = "gml_Script_anon@30849@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x3dc;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x3dd;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcab8);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_68 = 0x3de;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcab8);
    uStack_9c = 0xd;
    local_a8 = 0;
    if (&local_a8 != puVar3) {
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = uStack_a0;
      uStack_7c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_88);
    }
    local_68 = 0x3df;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcbe8);
    if (puVar4 != local_60) {
      local_88 = *puVar4;
      uStack_84 = puVar4[1];
      uStack_80 = puVar4[2];
      uStack_7c = puVar4[3];
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_88);
    }
    local_98 = local_60;
    local_88 = _DAT_1419e5fc0;
    uStack_84 = uRam00000001419e5fc4;
    uStack_80 = uRam00000001419e5fc8;
    uStack_7c = uRam00000001419e5fcc;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_88);
    local_90 = local_50;
    FUN_140e634e0(param_1,param_2,&local_b8,2,CONCAT44(uVar5,DAT_1419fee68),&local_98);
  }
  local_68 = 0x3e2;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

