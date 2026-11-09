// gml_Script_Attribute @ 0x1403c26c0

undefined8 *
gml_Script_Attribute
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
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
  longlong *local_60;
  undefined4 local_54;
  undefined8 local_50;
  byte local_44;
  longlong **local_38;
  undefined8 *local_30;
  
  local_90 = "gml_Script_anon@3851@Attribute@OFFERINGSINIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x8e;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x8f;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5d08);
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  local_54 = 6;
  local_60 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  local_38 = &local_60;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_50) goto LAB_1403c27f7;
  }
  local_80 = *(undefined4 *)param_5;
  uStack_7c = *(undefined4 *)((longlong)param_5 + 4);
  uStack_78 = *(undefined4 *)(param_5 + 1);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_80);
LAB_1403c27f7:
  local_30 = &local_50;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar4,DAT_1419fed78),&local_38);
  if (puVar3 != puVar1) {
    local_80 = *puVar3;
    uStack_7c = puVar3[1];
    uStack_78 = puVar3[2];
    uStack_74 = puVar3[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_80);
  }
  FUN_140e60910(1);
  local_88 = 0x90;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

