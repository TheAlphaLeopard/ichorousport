// gml_Script_anon_36908_DefineDebuffs_OFFERINGSINIT @ 0x1403fb160

undefined8 *
gml_Script_anon_36908_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [16];
  undefined8 local_60;
  byte local_54;
  undefined8 local_50;
  byte local_44;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@38233@anon@36908@DefineDebuffs@OFFERINGSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x62c;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x62c;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_60) goto LAB_1403fb24d;
  }
  local_80 = *(undefined4 *)puVar2;
  uStack_7c = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_78 = *(undefined4 *)(puVar2 + 1);
  uStack_74 = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_80);
LAB_1403fb24d:
  local_38 = &local_60;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_a8,1,DAT_141a02ef8,&local_38);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_88 = 0x62c;
    if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_50)) {
      local_80 = *(undefined4 *)puVar4;
      uStack_7c = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_78 = *(undefined4 *)(puVar4 + 1);
      uStack_74 = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_50);
      }
      FUN_140041b80(&local_50,&local_80);
    }
    local_30 = &local_50;
    FUN_140edd0e0(param_1,param_2,1,&local_30);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

