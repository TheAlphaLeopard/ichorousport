// gml_Script_anon_626____struct___702_gml_Object_oPlayerPause_Create_0 @ 0x140c87190

undefined8 *
gml_Script_anon_626____struct___702_gml_Object_oPlayerPause_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@451@___struct___702@gml_Object_oPlayerPause_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x17;
  FUN_140041df0(local_58,param_4,1,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x17;
  puVar4 = &DAT_1419df7b0;
  uVar3 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_28 = 0x17;
    if ((int)local_58[0] < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 10;
    *puVar2 = 1;
  }
  local_28 = 0x18;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8f18);
  FUN_140e609c0(param_1);
  if (0 < (int)local_58[0]) {
    puVar4 = (undefined8 *)*local_50;
  }
  if (puVar4 != puVar2) {
    local_48 = *(undefined4 *)puVar4;
    uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_40 = *(undefined4 *)(puVar4 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  if (0 < (int)local_58[0]) {
    puVar4 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

